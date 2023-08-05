// Copyright 2023 Adrian Pfaff


#include "OsiTrigger.h"

void UOsiTrigger::WatchValue_Implementation()
{
	UE_LOG(LogTemp, Error, TEXT("Do not call default implementation of WatchValue, override!"));
}

void UOsiTrigger::OnTriggered_Implementation()
{
	UE_LOG(LogTemp, Error, TEXT("Do not call default implementation of OnTriggered, override!"));
}


void UOsiTrigger::Setup_Implementation(UOsiParticipantComponent* Component)
{
	ParticipantComponent=Component;
}
