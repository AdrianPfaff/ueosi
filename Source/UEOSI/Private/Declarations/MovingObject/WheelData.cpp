// Copyright 2023 Adrian Pfaff


#include "Declarations/MovingObject/WheelData.h"

#include "osi_object.pb.h"
#include "Declarations/Common/RelativePositionDeclaration.h"
#include "Declarations/Common/RotationDeclaration.h"

void UWheelData::Initialize(osi3::MovingObject_VehicleAttributes_WheelData* WheelResource)
{
	InternalWheel=WheelResource;

	PositionDeclaration->PreInit(GetWorld(), OsiSubsystem);
	PositionDeclaration->Initialize(InternalWheel->mutable_position());

	RotationDeclaration->PreInit(GetWorld(), OsiSubsystem);
	RotationDeclaration->Initialize(InternalWheel->mutable_orientation());
}

void UWheelData::InitialDispatch()
{
	DispatchCommand([OsiWheel=InternalWheel, Axle=Axle, Index=Index, WheelRadius=WheelRadius, RimRadius=RimRadius, Width=Width]() mutable
	{
		OsiWheel->set_axle(Axle);
		OsiWheel->set_index(Index);
		OsiWheel->set_wheel_radius(WheelRadius);
		OsiWheel->set_rim_radius(RimRadius);
		OsiWheel->set_width(Width);
	});

	PositionDeclaration->InitialDispatch();
	RotationDeclaration->InitialDispatch();
}

void UWheelData::Update()
{
	//TODO: does not support changes at runtime

	PositionDeclaration->Update();
	RotationDeclaration->Update();
}
