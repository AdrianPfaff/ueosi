// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "OsiThreadLog.h"

using FOsiQueue=TQueue<TFunction<void()>>;

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

 inline void EnqueueCommand(TFunction<void()>& Cmd) { CommandQueue.Enqueue(Cmd); }

private:

 inline void CatchStall() const
 {
  if(FDateTime::Now()>NextDispatch){
   UE_LOG(LogOsiThread, Error, TEXT("Osi Thread stalled! Dispatch took longer than the interval (%fms)"), DispatchInterval.GetTotalMilliseconds());
  }
 }

 bool bActorsCurrentlyTicking=false;

 FRunnableThread* InternalThread;

 bool bShouldExit=false;

 FOsiQueue CommandQueue;
 FDateTime NextDispatch=0;

 FTimespan DispatchInterval=FTimespan::FromMilliseconds(16.6);
 
};
