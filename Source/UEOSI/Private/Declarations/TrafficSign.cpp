// Copyright 2023 Adrian Pfaff


#include "Declarations/TrafficSign.h"

#include "OsiIDProvider.h"
#include "osi_groundtruth.pb.h"
#include "Declarations/Common/BaseStationary.h"
#include "osi_trafficsign.pb.h"
#include "Declarations/MainTrafficSignClassification.h"
#include "Declarations/SupplementaryTrafficSign.h"
#include "OsiThread/OsiWorldSubsystem.h"

void UTrafficSign::Initialize()
{
	auto GroundTruth=OsiSubsystem->GetGlobalGroundTruth();

	Identifier=FOsiIDProvider::DefaultProvider().RequestID();
	InternalSign=GroundTruth->add_traffic_sign();

	MainSignBaseStationary->InternalInit(GetWorld(), OsiSubsystem);
	MainSignBaseStationary->Initialize(InternalSign->mutable_main_sign()->mutable_base());

	MainSignClassification->InternalInit(GetWorld(), OsiSubsystem);
	MainSignClassification->Initialize(InternalSign->mutable_main_sign()->mutable_classification());

	for(auto Sign : SupplementarySigns)
	{
		Sign->InternalInit(GetWorld(), OsiSubsystem);
		Sign->Initialize(InternalSign->add_supplementary_sign());
	}
}

void UTrafficSign::InitialDispatch()
{
	DispatchCommand([OsiSign=InternalSign, Identifier=Identifier]() mutable
	{
		OsiSign->mutable_id()->set_value(Identifier);
	});
	
	MainSignBaseStationary->InitialDispatch();
	MainSignClassification->InitialDispatch();

	for (auto Sign : SupplementarySigns)
	{
		Sign->InitialDispatch();
	}
}

void UTrafficSign::Update()
{
	MainSignBaseStationary->Update();
	MainSignClassification->Update();

	for (auto Sign : SupplementarySigns)
	{
		Sign->Update();
	}
}
