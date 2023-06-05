// Copyright 2023 Adrian Pfaff


#include "OsiThread/OsiThread.h"
#include "OsiThread/OsiThreadLog.h"

FOsiRunnable::FOsiRunnable(TSharedPtr<FOsiQueue> Queue)
{
	InternalThread=FRunnableThread::Create(this, TEXT("Osi Processor Thread"));
	CommandQueue=Queue;
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
