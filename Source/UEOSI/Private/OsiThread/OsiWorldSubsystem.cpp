// Copyright 2023 Adrian Pfaff


#include "OsiThread/OsiWorldSubsystem.h"

#include "OsiSettings.h"
#include "OsiThread/OsiThread.h"


TSet<EWorldType::Type> ValidTypes{EWorldType::PIE, EWorldType::Game};

bool UOsiWorldSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	auto OuterWorld=Cast<UWorld>(Outer);

	checkf(OuterWorld, TEXT("World Subsystem outer must be a world"))
	if(ValidTypes.Contains(OuterWorld->WorldType))
	{
		return true;
	}
	
	return false;
}

void UOsiWorldSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	OsiThread=MakeShared<FOsiRunnable>();
}

void UOsiWorldSubsystem::Deinitialize()
{
}

void UOsiWorldSubsystem::SaveOsiTrace(float TimeSeconds)
{
	auto Settings=GetDefault<UOsiSettings>();
	auto Frames=FMath::Pow(Settings->OsiIntervalMS/1000, -1)*TimeSeconds;
	OsiThread->SaveBuffer(Frames);
}
