// Copyright 2023 Adrian Pfaff


#include "Declarations/Common/RotationComponent.h"

void URotationComponent::InitialDispatch()
{
	auto Owner=GetTypedOuter<AActor>();
	Component=Cast<USceneComponent>(ComponentRef.GetComponent(Owner));

	checkf(Component, TEXT("Could not retrieve component. Are you sure the name is correct and the component is a scene component?"))

	LastRotation=Component->GetComponentRotation();

	DispatchRotation(LastRotation);
}

void URotationComponent::Update()
{
	if(LastRotation!=Component->GetComponentRotation())
	{
		LastRotation=Component->GetComponentRotation();
		DispatchRotation(LastRotation);
	}
}
