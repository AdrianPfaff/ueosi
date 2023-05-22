// Copyright 2023 Adrian Pfaff


#include "TrafficParticipantComponent.h"

UTrafficParticipantComponent::UTrafficParticipantComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	
}

void UTrafficParticipantComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void UTrafficParticipantComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
}

