// Copyright 2023 Adrian Pfaff


#include "Declarations/Sign/SupplementarySignArrow.h"

#include "osi_trafficsign.pb.h"

void USupplementarySignArrow::Initialize(osi3::TrafficSign_SupplementarySign_Classification_Arrow* ArrowResource)
{
	InternalArrow=ArrowResource;
}

void USupplementarySignArrow::InitialDispatch()
{
	DispatchCommand([OsiArrow=InternalArrow, Directions=Directions]() mutable 
	{
		for(auto& Direction : Directions)
		{
			OsiArrow->add_direction(static_cast<osi3::TrafficSign_SupplementarySign_Classification_Arrow_Direction>(Direction));
		}
	});
}

void USupplementarySignArrow::Update()
{
	//TODO: Does not support updating
}
