// Copyright 2023 Adrian Pfaff


#include "Declarations/TrafficSign.h"

#include "osi_groundtruth.pb.h"
#include "Declarations/Common/BaseStationary.h"
#include "osi_trafficsign.pb.h"
#include "OsiThread/OsiWorldSubsystem.h"

void UTrafficSign::Initialize()
{
	auto GroundTruth=OsiSubsystem->GetGlobalGroundTruth();
	InternalSign=GroundTruth->add_traffic_sign();

	MainSignBaseStationary->InternalInit(GetWorld(), OsiSubsystem);
	MainSignBaseStationary->Initialize(InternalSign->mutable_main_sign()->mutable_base());
}

void UTrafficSign::InitialDispatch()
{
	MainSignBaseStationary->InitialDispatch();
}

void UTrafficSign::Update()
{
	MainSignBaseStationary->Update();
}
