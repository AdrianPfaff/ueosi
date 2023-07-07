// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "OsiThreadLog.h"
#include "google/protobuf/arena.h"

//predecl
namespace osi3
{
	class GroundTruth;
}

//used to queue up commands modifying osi state
using FOsiQueue=TQueue<TFunction<void()>>;

/**
 *	Encapsulates all data generated in a frame, used for buffering
 */
struct FOsiFrame
{
	FOsiFrame()=default;
	
	osi3::GroundTruth* GroundTruth=nullptr;
};

/**	
 *	This thread processes changed state into osi/protobuf messages. Designed to be fast, read function comments to check for safety
 */
class FOsiRunnable : public FRunnable
{

public:
	FOsiRunnable();
	virtual ~FOsiRunnable() override;
 
	virtual bool Init() override;

	virtual uint32 Run() override;

	virtual void Stop() override;

	virtual void Exit() override;

	//thread safe, used to update osi state
	inline void EnqueueCommand(TFunction<void()>& Cmd) { CommandQueue.Enqueue(Cmd); }

	//thread safe, used to efficiently allocate new protobuf messages. also handles lifetime
	template<class T>
	T* AllocateMessage()
	{
		return google::protobuf::Arena::CreateMessage<T>(&Arena);
	}

	//NOT thread safe to read/write data in any form! only manipulate using commands. exception: allocating new sub-messages.
	osi3::GroundTruth* GetGlobalGroundTruth() const { return GroundTruth; }

	//TODO: NOT Thread safe if another saving operation has been queued!
	void SaveBuffer(uint32 AmountOfFrames);

private:
	
	inline void CatchStall() const
	{
		if(FDateTime::Now()>NextDispatch){
			UE_LOG(LogOsiThread, Error, TEXT("Osi Thread stalled! Dispatch took longer than the interval (%fms)"), DispatchInterval.GetTotalMilliseconds());
		}
	}

	//protobuf top level message handles
	osi3::GroundTruth* GroundTruth;
	
	FRunnableThread* InternalThread;

	//used in loop to break out gracefully
	bool bShouldExit=false;

	//used in loop to initiate saving at right moment (after osi state has been updated)
	bool bShouldSaveToDisk=false;

	//queue for commands. NOTE: currently set to single producer (game thread), single consumer (osi thread).
	FOsiQueue CommandQueue;
	
	FDateTime NextDispatch=0;

	//time between each loop. used to wait until next iteration/check if thread has stalled
	FTimespan DispatchInterval;

	//time when the thread was started. used to calculate timestamps for OSI
	FDateTime StartTime;

	//allocator for messages. improves performance, thread safe. see https://protobuf.dev/reference/cpp/arenas/
	google::protobuf::Arena Arena;

	//prealloc tiniest buffer, will be replaced anyways. required because no default constructor is available
	TCircularBuffer<FOsiFrame> FrameBuffer=TCircularBuffer<FOsiFrame>(0);

	//how many osi frames (see FOsiFrame) are retained before being discarded. set from Project Settings
	uint32 BufferSize;

	//used to fill the buffer each loop, wraps around automatically
	uint32 CurrentBufferIndex=0;

	//Used in loop to determine how many osi frames should be saved
	uint32 FramesToSave=0;

	//helper to open/save osi trace. Warning: may fail silently, although unlikely!
	TSharedPtr<IFileHandle> OpenFile(const TCHAR* Filename);
 
};
