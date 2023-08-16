// Copyright 2023 Adrian Pfaff


#include "Declarations/Occupant.h"

#include "OsiIDProvider.h"
#include "osi_groundtruth.pb.h"
#include "Declarations/Occupant/OccupantClassification.h"
#include "OsiThread/OsiWorldSubsystem.h"

void UOccupant::Initialize()
{
	auto GroundTruth=OsiSubsystem->GetGlobalGroundTruth();
	DriverID=FOsiIDProvider::DefaultProvider().RequestID();
	InternalOccupant=GroundTruth->add_occupant();

	Classification->PreInit(GetWorld(), OsiSubsystem);
	Classification->Initialize(InternalOccupant->mutable_classification());
}

void UOccupant::InitialDispatch()
{
	DispatchCommand([OsiOccupant=InternalOccupant, DriverID=DriverID]()
	{
		OsiOccupant->mutable_id()->set_value(DriverID);
	});
	Classification->InitialDispatch();
}

void UOccupant::Update()
{
	Classification->Update();
}
