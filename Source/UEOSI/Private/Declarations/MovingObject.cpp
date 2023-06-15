// Copyright 2023 Adrian Pfaff


#include "Declarations/MovingObject.h"

#include "OsiIDProvider.h"
#include "osi_groundtruth.pb.h"
#include "Declarations/MovingObject/BaseMoving.h"
#include "OsiThread/OsiWorldSubsystem.h"

void UMovingObject::Initialize()
{
	auto GroundTruth=OsiSubsystem->GetGlobalGroundTruth();

	Identifier=FOsiIDProvider::DefaultProvider().RequestID();
	InternalObject=GroundTruth->add_moving_object();

	BaseMovingDeclaration->InternalInit(GetWorld(), OsiSubsystem);
	BaseMovingDeclaration->Initialize(InternalObject->mutable_base());
	
}

void UMovingObject::InitialDispatch()
{
	DispatchCommand([OsiObject=InternalObject, Identifier=Identifier, Type=Type]() mutable
	{
		OsiObject->mutable_id()->set_value(Identifier);
		OsiObject->set_type(static_cast<osi3::MovingObject_Type>(Type));
	});

	BaseMovingDeclaration->InitialDispatch();
}

void UMovingObject::Update()
{
	BaseMovingDeclaration->Update();

	//TODO: does not support modification yet
}
