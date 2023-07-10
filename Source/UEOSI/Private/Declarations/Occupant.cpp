// Copyright 2023 Adrian Pfaff


#include "Declarations/Occupant.h"

#include "OsiIDProvider.h"
#include "osi_groundtruth.pb.h"
#include "OsiThread/OsiWorldSubsystem.h"

void UOccupant::Initialize()
{
	auto GroundTruth=OsiSubsystem->GetGlobalGroundTruth();
	DriverID=FOsiIDProvider::DefaultProvider().RequestID();
	InternalOccupant=GroundTruth->add_occupant();

	
}

void UOccupant::InitialDispatch()
{
	DispatchCommand([OsiOccupant=InternalOccupant, DriverID=DriverID]()
	{
		OsiOccupant->mutable_id()->set_value(DriverID);
	});
}

void UOccupant::Update()
{
	
}
