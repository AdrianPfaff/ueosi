// Copyright 2023 Adrian Pfaff


#include "Declarations/Sign/SupplementaryTrafficSign.h"

#include "osi_trafficsign.pb.h"
#include "Declarations/Sign/SupplementarySignClassification.h"
#include "Declarations/Common/BaseStationary.h"

void USupplementaryTrafficSign::Initialize(osi3::TrafficSign_SupplementarySign* SignResource)
{
	InternalSign=SignResource;

	BaseStationary->InternalInit(GetWorld(), OsiSubsystem);
	BaseStationary->Initialize(InternalSign->mutable_base());

	SupplementaryClassification->InternalInit(GetWorld(), OsiSubsystem);
	SupplementaryClassification->Initialize(InternalSign->mutable_classification());
	
}

void USupplementaryTrafficSign::InitialDispatch()
{
	BaseStationary->InitialDispatch();
	SupplementaryClassification->InitialDispatch();
	
}

void USupplementaryTrafficSign::Update()
{
	BaseStationary->Update();
	SupplementaryClassification->Update();
}
