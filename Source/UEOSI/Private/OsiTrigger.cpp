// Copyright 2023 Adrian Pfaff


#include "OsiTrigger.h"

void UOsiTrigger::Observe_Implementation()
{
	UE_LOG(LogTemp, Error, TEXT("Do not call default implementation of Observe, override!"));
}

void UOsiTrigger::Trigger_Implementation()
{
	UE_LOG(LogTemp, Error, TEXT("Do not call default implementation of Trigger, override!"));
}


void UOsiTrigger::Setup_Implementation(UOsiParticipantComponent* Component, UWorld* World)
{
    WorldHandle=World;
	ParticipantComponent=Component;
}
