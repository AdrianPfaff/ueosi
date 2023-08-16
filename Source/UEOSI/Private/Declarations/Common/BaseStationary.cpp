// Copyright 2023 Adrian Pfaff


#include "Declarations/Common/BaseStationary.h"

#include "osi_common.pb.h"
#include "Declarations/Common/BoundingBoxDeclaration.h"
#include "Declarations/Common/PositionDeclaration.h"
#include "Declarations/Common/RotationDeclaration.h"

void UBaseStationary::Initialize(osi3::BaseStationary* OsiResource)
{
	InternalBaseStationary=OsiResource;

	PositionDeclaration->PreInit(GetWorld(), OsiSubsystem);
	PositionDeclaration->Initialize(InternalBaseStationary->mutable_position());

	RotationDeclaration->PreInit(GetWorld(), OsiSubsystem);
	RotationDeclaration->Initialize(InternalBaseStationary->mutable_orientation());

	BoundingBoxDeclaration->PreInit(GetWorld(), OsiSubsystem);
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
