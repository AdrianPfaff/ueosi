// Copyright 2023 Adrian Pfaff


#include "OsiThread/OsiThread.h"

#include "OsiSettings.h"
#include "osi_groundtruth.pb.h"
#include "OsiThread/OsiThreadLog.h"



FOsiRunnable::FOsiRunnable()
{
	InternalThread=FRunnableThread::Create(this, TEXT("Osi Processor Thread"));
}

FOsiRunnable::~FOsiRunnable()
{
	InternalThread->Kill();
	delete InternalThread;
}

bool FOsiRunnable::Init()
{
	UE_LOG(LogOsiThread, Display, TEXT("Initializing OSI Thread"))

	auto OsiSettings=GetDefault<UOsiSettings>();
	DispatchInterval=FTimespan::FromMilliseconds(OsiSettings->OsiIntervalMS);
	FrameBuffer=TCircularBuffer<FOsiFrame>(OsiSettings->TraceFrameBufferSize);
	BufferSize=FrameBuffer.Capacity();

	GroundTruth=AllocateMessage<osi3::GroundTruth>();

	//allocate messages
	do
	{
		FrameBuffer[CurrentBufferIndex].GroundTruth=AllocateMessage<osi3::GroundTruth>();
		CurrentBufferIndex=FrameBuffer.GetNextIndex(CurrentBufferIndex);
	} while(CurrentBufferIndex!=0);
	
	return true;
}

uint32 FOsiRunnable::Run()
{
	while(!bShouldExit)
	{
		NextDispatch=FDateTime::Now()+DispatchInterval;
		while (!CommandQueue.IsEmpty())
		{
			TFunction<void()> Functor;
			CommandQueue.Dequeue(Functor);
			Functor();
			
		}

		//dispatch trace frame
		FrameBuffer[CurrentBufferIndex].GroundTruth->CopyFrom(*GroundTruth);

		//update index
		CurrentBufferIndex=FrameBuffer.GetNextIndex(CurrentBufferIndex);

		if(bShouldSaveToDisk)
		{
			auto File=OpenFile(TEXT("OutputTrace.osi"));
			uint32 IndexToSave=FrameBuffer.GetPreviousIndex(CurrentBufferIndex);
			uint32 SavedIndices=0;
			auto MemSize=FrameBuffer[IndexToSave].GroundTruth->ByteSizeLong();
			auto Mem=FMemory::Malloc(MemSize);
			while(SavedIndices!=FramesToSave)
			{
				auto NewMemSize=FrameBuffer[IndexToSave].GroundTruth->ByteSizeLong();
				if(MemSize < NewMemSize)
				{
					MemSize=NewMemSize;
					Mem=FMemory::Realloc(Mem, NewMemSize);
				}
				
				FrameBuffer[CurrentBufferIndex].GroundTruth->SerializeToArray(Mem, MemSize);
				File->Write(static_cast<uint8*>(Mem), MemSize);

				IndexToSave=FrameBuffer.GetPreviousIndex(IndexToSave);
				++SavedIndices;
			}
			bShouldSaveToDisk=false;
		}

		CatchStall();
		
		while (FDateTime::Now()<NextDispatch)
		{
			//putting to sleep is no option, wake in time is not guaranteed
			//could maybe sleep here and wake from game thread again
		}
			
	}
	return true;
}

void FOsiRunnable::Stop()
{
	bShouldExit=true;
}

void FOsiRunnable::Exit()
{
	UE_LOG(LogOsiThread, Display, TEXT("Shutting down OSI Thread"))
	//cleanup
}

void FOsiRunnable::SaveBuffer(uint32 AmountOfFrames)
{
	bShouldSaveToDisk=true;

	FramesToSave=FMath::Clamp(AmountOfFrames, 0, BufferSize);
	
}

TSharedPtr<IFileHandle> FOsiRunnable::OpenFile(const TCHAR* Filename)
{
	auto& Platform=IPlatformFile::GetPlatformPhysical();

	FString Path=FPaths::ProjectDir();
	Path.Append(Filename);
	return TSharedPtr<IFileHandle>(Platform.OpenWrite(*Path));
}
