// Copyright 2023 Adrian Pfaff


#include "Declarations/MovingObject/BaseMoving.h"

#include "osi_common.pb.h"
#include "Declarations/Common/BoundingBoxDeclaration.h"
#include "Declarations/Common/PositionDeclaration.h"
#include "Declarations/Common/RotationDeclaration.h"

void UBaseMoving::Initialize(osi3::BaseMoving* MovingResource)
{
	InternalMoving=MovingResource;

	BoundingBoxDeclaration->PreInit(GetWorld(), OsiSubsystem);
	BoundingBoxDeclaration->Initialize(InternalMoving->mutable_dimension());

	PositionDeclaration->PreInit(GetWorld(), OsiSubsystem);
	PositionDeclaration->Initialize(InternalMoving->mutable_position());

	RotationDeclaration->PreInit(GetWorld(), OsiSubsystem);
	RotationDeclaration->Initialize(InternalMoving->mutable_orientation());
}

void UBaseMoving::InitialDispatch()
{
	BoundingBoxDeclaration->InitialDispatch();
	PositionDeclaration->InitialDispatch();
	RotationDeclaration->InitialDispatch();
}

void UBaseMoving::Update()
{
	BoundingBoxDeclaration->Update();
	PositionDeclaration->Update();
	RotationDeclaration->Update();
}
