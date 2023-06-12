// Copyright 2023 Adrian Pfaff


#include "Declarations/Common/BaseStationary.h"

#include "osi_common.pb.h"
#include "Declarations/Common/BoundingBoxDeclaration.h"
#include "Declarations/Common/PositionDeclaration.h"
#include "Declarations/Common/RotationDeclaration.h"

void UBaseStationary::Initialize(osi3::BaseStationary* OsiResource)
{
	InternalBaseStationary=OsiResource;

	PositionDeclaration->InternalInit(GetWorld(), OsiSubsystem);
	PositionDeclaration->Initialize(InternalBaseStationary->mutable_position());

	RotationDeclaration->InternalInit(GetWorld(), OsiSubsystem);
	RotationDeclaration->Initialize(InternalBaseStationary->mutable_orientation());

	BoundingBoxDeclaration->InternalInit(GetWorld(), OsiSubsystem);
	BoundingBoxDeclaration->Initialize(InternalBaseStationary->mutable_dimension());
}

void UBaseStationary::InitialDispatch()
{
	PositionDeclaration->InitialDispatch();
	RotationDeclaration->InitialDispatch();
	BoundingBoxDeclaration->InitialDispatch();
}

void UBaseStationary::Update()
{
	PositionDeclaration->Update();
	RotationDeclaration->Update();
	BoundingBoxDeclaration->Update();
}
