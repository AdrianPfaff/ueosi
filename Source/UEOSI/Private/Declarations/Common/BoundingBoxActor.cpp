// Copyright 2023 Adrian Pfaff


#include "Declarations/Common/BoundingBoxActor.h"

void UBoundingBoxActor::InitialDispatch()
{
	Actor=GetTypedOuter<AActor>();
	LastExtent=Actor->GetComponentsBoundingBox().GetExtent();
	DispatchDimension(LastExtent);
}

void UBoundingBoxActor::Update()
{
	auto NewExtent=Actor->GetComponentsBoundingBox().GetExtent();
	if(LastExtent!=NewExtent)
	{
		LastExtent=NewExtent;
		DispatchDimension(LastExtent);
	}
}
