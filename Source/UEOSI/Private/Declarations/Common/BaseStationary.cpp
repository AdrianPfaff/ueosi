// Copyright 2023 Adrian Pfaff


#include "Declarations/Common/BaseStationary.h"

#include "osi_common.pb.h"
#include "Declarations/Common/PositionDeclaration.h"

void UBaseStationary::Initialize(osi3::BaseStationary* OsiResource)
{
	InternalBaseStationary=OsiResource;

	PositionDeclaration->InternalInit(GetWorld(), OsiSubsystem);
	PositionDeclaration->Initialize(InternalBaseStationary->mutable_position());
}

void UBaseStationary::InitialDispatch()
{
	PositionDeclaration->InitialDispatch();
}

void UBaseStationary::Update()
{
	PositionDeclaration->Update();
}
