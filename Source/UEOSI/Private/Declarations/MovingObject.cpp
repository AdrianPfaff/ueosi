// Copyright 2023 Adrian Pfaff


#include "Declarations/MovingObject.h"

#include "OsiIDProvider.h"
#include "osi_groundtruth.pb.h"
#include "OsiThread/OsiWorldSubsystem.h"

void UMovingObject::Initialize()
{
	auto GroundTruth=OsiSubsystem->GetGlobalGroundTruth();

	Identifier=FOsiIDProvider::DefaultProvider().RequestID();
	InternalObject=GroundTruth->add_moving_object();
	
}

void UMovingObject::InitialDispatch()
{
	DispatchCommand([OsiObject=InternalObject, Identifier=Identifier]() mutable
	{
		OsiObject->mutable_id()->set_value(Identifier);
	});
}

void UMovingObject::Update()
{
	
}
