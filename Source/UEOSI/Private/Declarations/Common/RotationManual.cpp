// Copyright 2023 Adrian Pfaff


#include "Declarations/Common/RotationManual.h"

void URotationManual::InitialDispatch()
{
	DispatchRotation(Rotation);
}

void URotationManual::Update()
{
	if(bRotationHasChanged)
	{
		DispatchRotation(Rotation);
		bRotationHasChanged=false;
	}
}