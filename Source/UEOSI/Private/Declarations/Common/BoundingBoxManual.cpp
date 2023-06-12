// Copyright 2023 Adrian Pfaff


#include "Declarations/Common/BoundingBoxManual.h"

void UBoundingBoxManual::InitialDispatch()
{
	DispatchDimension(Extent);
}

void UBoundingBoxManual::Update()
{
	if(bExtentHasChanged)
	{
		DispatchDimension(Extent);
		bExtentHasChanged=false;
	}
}
