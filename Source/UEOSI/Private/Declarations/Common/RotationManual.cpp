// Copyright 2023 Adrian Pfaff


#include "Declarations/Common/RotationManual.h"

#include "MathConversion.h"
#include "osi_common.pb.h"

void URotationManual::InitialDispatch()
{
	DispatchRotation();
}

void URotationManual::Update()
{
	if(bRotationHasChanged)
	{
		DispatchRotation();
		bRotationHasChanged=false;
	}
}

void URotationManual::DispatchRotation()
{
	DispatchCommand([Rotation=Rotation, InternalOrientation=InternalOrientation]() mutable 
	{
		RotLHSToRHS(Rotation);
		InternalOrientation->set_roll(Rotation.Roll);
		InternalOrientation->set_pitch(Rotation.Pitch);
		InternalOrientation->set_yaw(Rotation.Yaw);
	});
}
