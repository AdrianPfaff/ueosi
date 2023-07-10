// Copyright 2023 Adrian Pfaff


#include "Declarations/Occupant/OccupantClassification.h"

#include "osi_occupant.pb.h"

void UOccupantClassification::Initialize(osi3::Occupant_Classification* ClassificationResource)
{
	InternalClassification=ClassificationResource;
}

void UOccupantClassification::InitialDispatch()
{
	DispatchCommand([OsiClassification=InternalClassification, bIsDriver=bIsDriver, Seat=Seat, SteeringControl=SteeringControl]()
	{
		OsiClassification->set_is_driver(bIsDriver);
		OsiClassification->set_seat(static_cast<osi3::Occupant_Classification_Seat>(Seat));
		OsiClassification->set_steering_control(static_cast<osi3::Occupant_Classification_SteeringControl>(SteeringControl));
	});
}

void UOccupantClassification::Update()
{
	//TODO: Does not support updating
}
