// Copyright 2023 Adrian Pfaff


#include "Declarations/Common/RelativePositionDeclaration.h"

#include "MathConversion.h"
#include "osi_common.pb.h"

void URelativePositionDeclaration::Initialize(osi3::Vector3d* PositionResource)
{
	InternalPosition=PositionResource;
}

void URelativePositionDeclaration::DispatchPosition(FVector Position)
{
	DispatchCommand([OsiPosition=InternalPosition, Position]() mutable
	{
		VecLHStoRHS(Position);
		OsiPosition->set_x(Position.X);
		OsiPosition->set_y(Position.Y);
		OsiPosition->set_z(Position.Z);
	});
}
