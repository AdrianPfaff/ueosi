// Copyright 2023 Adrian Pfaff


#include "Declarations/Common/RotationDeclaration.h"

#include "MathConversion.h"
#include "osi_common.pb.h"

void URotationDeclaration::Initialize(osi3::Orientation3d* OrientationResource)
{
	InternalOrientation=OrientationResource;
}

void URotationDeclaration::DispatchRotation(FRotator Rotation)
{
	DispatchCommand([Rotation, InternalOrientation=InternalOrientation]() mutable 
	{
		RotLHSToRHS(Rotation);
		InternalOrientation->set_roll(Rotation.Roll);
		InternalOrientation->set_pitch(Rotation.Pitch);
		InternalOrientation->set_yaw(Rotation.Yaw);
	});
}
