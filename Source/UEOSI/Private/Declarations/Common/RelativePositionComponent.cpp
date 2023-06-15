// Copyright 2023 Adrian Pfaff


#include "Declarations/Common/RelativePositionComponent.h"

void URelativePositionComponent::InitialDispatch()
{
	auto Owner=GetTypedOuter<AActor>();
	OriginComponent=Cast<USceneComponent>(OriginComponentRef.GetComponent(Owner));
	TargetComponent=Cast<USceneComponent>(TargetComponentRef.GetComponent(Owner));

	checkf(OriginComponent, TEXT("Could not retrieve component. Are you sure the name is correct and the component is a scene component?"))
	checkf(TargetComponent, TEXT("Could not retrieve component. Are you sure the name is correct and the component is a scene component?"))

	LastOriginLocation=OriginComponent->GetComponentLocation();
	LastTargetLocation=TargetComponent->GetComponentLocation();

	DispatchPosition(LastOriginLocation-LastTargetLocation);
}

void URelativePositionComponent::Update()
{
	if(LastOriginLocation!=OriginComponent->GetComponentLocation() || LastTargetLocation!=TargetComponent->GetComponentLocation())
	{
		LastOriginLocation=OriginComponent->GetComponentLocation();
		LastTargetLocation=TargetComponent->GetComponentLocation();

		DispatchPosition(LastOriginLocation-LastTargetLocation);
	}
}
