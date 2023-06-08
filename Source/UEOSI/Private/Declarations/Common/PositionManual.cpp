// Copyright 2023 Adrian Pfaff


#include "Declarations/Common/PositionManual.h"

#include "osi_common.pb.h"
#include "VectorConversion.h"

void UPositionManual::InitialDispatch()
{
	DispatchPosition();
}

void UPositionManual::Update()
{
	if(!bPositionHasChanged)
	{
		return;
	}
	DispatchPosition();
}

void UPositionManual::DispatchPosition()
{
	DispatchCommand([InternalPosition=InternalPosition, Position=Position] () mutable
	{
		VecLHStoRHS(Position);
		InternalPosition->set_x(Position.X);
		InternalPosition->set_y(Position.Y);
		InternalPosition->set_z(Position.Z);
	}
	);
}
