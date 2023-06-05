// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "OsiThread/OsiWorldSubsystem.h"

/**
 * 
 */
class FOsiRunnable : public FRunnable
{

public:

 FOsiRunnable(TSharedPtr<FOsiQueue> Queue);
 virtual ~FOsiRunnable() override;
 
 virtual bool Init() override;

 virtual uint32 Run() override;

 virtual void Stop() override;

 virtual void Exit() override;

private:

 FRunnableThread* InternalThread;

 TSharedPtr<FOsiQueue> CommandQueue;

 bool bShouldExit=false;
};
