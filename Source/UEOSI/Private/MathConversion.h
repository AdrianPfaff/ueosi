// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"

inline void VecLHStoRHS(FVector& InVec)
{
	//negate x to convert
	InVec.X=-InVec.X;
}

inline void RotLHSToRHS(FRotator& InRot)
{
	//negate Roll to convert?
	InRot.Roll=-InRot.Roll;
}
