// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "OsiThreadLog.h"
#include "google/protobuf/arena.h"

namespace osi3
{
	class GroundTruth;
}

using FOsiQueue=TQueue<TFunction<void()>>;

struct FOsiFrame
{
	FOsiFrame()=default;
	
	osi3::GroundTruth* GroundTruth=nullptr;
};

/**
 * 
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

	//thread safe
	inline void EnqueueCommand(TFunction<void()>& Cmd) { CommandQueue.Enqueue(Cmd); }

	//thread safe
	template<class T>
	T* AllocateMessage()
	{
		return google::protobuf::Arena::CreateMessage<T>(&Arena);
	}

	//NOT thread safe to read/write data in any form! only manipulate using commands. exception: allocating new sub-messages
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

	osi3::GroundTruth* GroundTruth;

	FRunnableThread* InternalThread;

	bool bShouldExit=false;

	bool bShouldSaveToDisk=false;

	FOsiQueue CommandQueue;
	FDateTime NextDispatch=0;

	FTimespan DispatchInterval;

	//allocator for messages
	google::protobuf::Arena Arena;

	//prealloc tiniest buffer, will be replaced anyways
	TCircularBuffer<FOsiFrame> FrameBuffer=TCircularBuffer<FOsiFrame>(0);

	uint32 BufferSize;

	uint32 CurrentBufferIndex=0;

	uint32 FramesToSave=0;

	TSharedPtr<IFileHandle> OpenFile(const TCHAR* Filename);
 
};
