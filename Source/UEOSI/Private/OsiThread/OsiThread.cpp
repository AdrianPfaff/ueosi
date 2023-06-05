﻿// Copyright 2023 Adrian Pfaff


#include "OsiThread/OsiThread.h"
#include "OsiThread/OsiThreadLog.h"
#include "OsiWorldSubsystem.h"



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
	return true;
}

uint32 FOsiRunnable::Run()
{
	while(!bShouldExit)
	{
		Timestamp=FDateTime::Now();
		NextDispatch=Timestamp+DispatchInterval;
		while (!CommandQueue.IsEmpty())
		{
			TFunction<void()> Functor;
			CommandQueue.Dequeue(Functor);
			Functor();
			
		}

		//dispatch trace frame

		while (CurrentTime<NextDispatch)
		{
			CurrentTime=FDateTime::Now();
		}

		CatchStall();
			
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
