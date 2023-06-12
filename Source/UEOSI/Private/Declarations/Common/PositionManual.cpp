// Copyright 2023 Adrian Pfaff


#include "Declarations/Common/PositionManual.h"

#include "osi_common.pb.h"
#include "MathConversion.h"

void UPositionManual::InitialDispatch()
{
	DispatchPosition(Position);
}

void UPositionManual::Update()
{
	if(!bPositionHasChanged)
	{
		return;
	}
	DispatchPosition(Position);
}
