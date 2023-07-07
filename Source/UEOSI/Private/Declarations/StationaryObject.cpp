// Copyright 2023 Adrian Pfaff


#include "Declarations/StationaryObject.h"

#include "OsiIDProvider.h"
#include "osi_groundtruth.pb.h"
#include "Declarations/Common/BaseStationary.h"
#include "Declarations/StationaryObject/StationaryObjectClassification.h"
#include "OsiThread/OsiWorldSubsystem.h"

void UStationaryObject::Initialize()
{
	auto GroundTruth=OsiSubsystem->GetGlobalGroundTruth();

	FOsiIDProvider::DefaultProvider().RequestID();
	InternalStationary=GroundTruth->add_stationary_object();

	BaseStationary->InternalInit(GetWorld(), OsiSubsystem);
	BaseStationary->Initialize(InternalStationary->mutable_base());

	ObjectClassification->InternalInit(GetWorld(), OsiSubsystem);
	ObjectClassification->Initialize(InternalStationary->mutable_classification());
}

void UStationaryObject::InitialDispatch()
{
	DispatchCommand([OsiStationary=InternalStationary, Identifier=Identifier]()
	{
		OsiStationary->mutable_id()->set_value(Identifier);
	});

	BaseStationary->InitialDispatch();
	ObjectClassification->InitialDispatch();
}

void UStationaryObject::Update()
{

	BaseStationary->Update();
	ObjectClassification->Update();
}
