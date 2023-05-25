// Copyright 2023 Adrian Pfaff


#include "OsiParticipantComponent.h"

UOsiParticipantComponent::UOsiParticipantComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	
}

void UOsiParticipantComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void UOsiParticipantComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
}

