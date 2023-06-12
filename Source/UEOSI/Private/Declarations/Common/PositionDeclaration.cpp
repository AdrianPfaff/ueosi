// Copyright 2023 Adrian Pfaff


#include "Declarations/Common/PositionDeclaration.h"

#include "MathConversion.h"
#include "osi_common.pb.h"

void UPositionDeclaration::Initialize(osi3::Vector3d* PositionResource)
{
	InternalPosition=PositionResource;
}

void UPositionDeclaration::DispatchPosition(FVector Position)
{
	DispatchCommand([Position, OsiPosition=InternalPosition] () mutable
	{
		VecLHStoRHS(Position);
		OsiPosition->set_x(Position.X);
		OsiPosition->set_y(Position.Y);
		OsiPosition->set_z(Position.Z);
	}
	);
}
