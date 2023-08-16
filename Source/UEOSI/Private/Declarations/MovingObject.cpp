// Copyright 2023 Adrian Pfaff


#include "Declarations/MovingObject.h"

#include "OsiIDProvider.h"
#include "osi_groundtruth.pb.h"
#include "Declarations/MovingObject/BaseMoving.h"
#include "Declarations/MovingObject/MovingObjectClassification.h"
#include "Declarations/MovingObject/VehicleAttributes.h"
#include "Declarations/MovingObject/VehicleClassification.h"
#include "OsiThread/OsiWorldSubsystem.h"

void UMovingObject::Initialize()
{
	auto GroundTruth=OsiSubsystem->GetGlobalGroundTruth();

	Identifier=FOsiIDProvider::DefaultProvider().RequestID();
	InternalObject=GroundTruth->add_moving_object();

	BaseMovingDeclaration->PreInit(GetWorld(), OsiSubsystem);
	BaseMovingDeclaration->Initialize(InternalObject->mutable_base());

	VehicleAttributes->PreInit(GetWorld(), OsiSubsystem);
	VehicleAttributes->Initialize(InternalObject->mutable_vehicle_attributes());

	VehicleClassification->PreInit(GetWorld(), OsiSubsystem);
	VehicleClassification->Initialize(InternalObject->mutable_vehicle_classification());

	MovingObjectClassification->PreInit(GetWorld(), OsiSubsystem);
	MovingObjectClassification->Initialize(InternalObject->mutable_moving_object_classification());
	
}

void UMovingObject::InitialDispatch()
{
	DispatchCommand([OsiObject=InternalObject, Identifier=Identifier, Type=Type, ColorDescription=ColorDescription]() mutable
	{
		OsiObject->mutable_id()->set_value(Identifier);
		OsiObject->set_type(static_cast<osi3::MovingObject_Type>(Type));
		//TODO: are these colors correct? osi makes no mention of format, encoding, srgb gamma etrc.
		OsiObject->mutable_color_description()->mutable_rgb()->set_red(ColorDescription.R);
		OsiObject->mutable_color_description()->mutable_rgb()->set_green(ColorDescription.G);
		OsiObject->mutable_color_description()->mutable_rgb()->set_blue(ColorDescription.B);
	});

	BaseMovingDeclaration->InitialDispatch();
	VehicleAttributes->InitialDispatch();
	VehicleClassification->InitialDispatch();
	MovingObjectClassification->InitialDispatch();
}

void UMovingObject::Update()
{
	BaseMovingDeclaration->Update();
	VehicleAttributes->Update();
	VehicleClassification->Update();
	MovingObjectClassification->Update();
	//TODO: does not support modification yet
}
