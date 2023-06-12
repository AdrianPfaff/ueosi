// Copyright 2023 Adrian Pfaff


#include "Declarations/Common/RotationDeclaration.h"

void URotationDeclaration::Initialize(osi3::Orientation3d* OrientationResource)
{
	InternalOrientation=OrientationResource;
}
