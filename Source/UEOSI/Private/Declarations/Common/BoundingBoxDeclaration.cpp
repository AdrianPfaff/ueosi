// Copyright 2023 Adrian Pfaff


#include "Declarations/Common/BoundingBoxDeclaration.h"

#include "osi_common.pb.h"

void UBoundingBoxDeclaration::Initialize(osi3::Dimension3d* DimensionResource)
{
	InternalDimension=DimensionResource;
}

void UBoundingBoxDeclaration::DispatchDimension(FVector Extent)
{
	DispatchCommand([Extent, OsiDimension=InternalDimension]() mutable 
	{
		OsiDimension->set_length(Extent.X);
		OsiDimension->set_width(Extent.Y);
		OsiDimension->set_height(Extent.Z);
	});
}
