// Copyright 2023 Adrian Pfaff


#include "OsiThread/OsiWorldSubsystem.h"

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
	OsiQueue=MakeShared<FOsiQueue>();
	OsiThread=MakeShared<FOsiRunnable>(OsiQueue);
}

void UOsiWorldSubsystem::Deinitialize()
{
}
