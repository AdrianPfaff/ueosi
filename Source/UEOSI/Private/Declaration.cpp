// Copyright 2023 Adrian Pfaff


#include "Declaration.h"
#include "OsiThread/OsiWorldSubsystem.h"

void UDeclaration::InternalInit(UWorld* InWorld, UOsiWorldSubsystem* InSubsystem)
{
	World=InWorld;
	OsiSubsystem=InSubsystem;
	
}

UWorld* UDeclaration::GetWorld() const
{
	checkf(World, TEXT("Internal init has not been called!"))
	return World;
}

void UDeclaration::DispatchCommand(TFunction<void()> Command)
{
	checkf(OsiSubsystem, TEXT("Internal init has not been called!"))
	OsiSubsystem->EnqueueCommand(Command);
}
