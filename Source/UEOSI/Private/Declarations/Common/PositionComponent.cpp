// Copyright 2023 Adrian Pfaff


#include "Declarations/Common/PositionComponent.h"

#include "osi_common.pb.h"
#include "MathConversion.h"

void UPositionComponent::InitialDispatch()
{
	auto Owner=GetTypedOuter<AActor>();
	Component=Cast<USceneComponent>(ComponentRef.GetComponent(Owner));

	checkf(Component, TEXT("Could not retrieve component. Are you sure the name is correct and the component is a scene component?"))

	LastPosition=Component->GetComponentLocation();

	DispatchPosition(LastPosition);
}

void UPositionComponent::Update()
{
	if(LastPosition!=Component->GetComponentLocation())
	{
		LastPosition=Component->GetComponentLocation();
		DispatchPosition(LastPosition);
	}
}

void UPositionComponent::DispatchPosition(FVector Position)
{
	DispatchCommand([InternalPosition=InternalPosition, Position] () mutable
	{
		VecLHStoRHS(Position);
		InternalPosition->set_x(Position.X);
		InternalPosition->set_y(Position.Y);
		InternalPosition->set_z(Position.Z);
	}
	);
}
