// Copyright 2023 Adrian Pfaff


#include "Declarations/MovingObject/VehicleClassification.h"

#include "osi_object.pb.h"
#include "Declarations/MovingObject/LightState.h"

void UVehicleClassification::Initialize(osi3::MovingObject_VehicleClassification* ClassificationResource)
{
	InternalClassification=ClassificationResource;

	LightState->PreInit(GetWorld(), OsiSubsystem);
	LightState->Initialize(InternalClassification->mutable_light_state());
}

void UVehicleClassification::InitialDispatch()
{
	DispatchCommand([OsiClassification=InternalClassification, Type=Type, Role=Role, bHasTrailer=bHasTrailer, TrailerID=TrailerID]() mutable
	{
		OsiClassification->set_type(static_cast<osi3::MovingObject_VehicleClassification_Type>(Type));
		OsiClassification->set_has_trailer(bHasTrailer);
		OsiClassification->mutable_trailer_id()->set_value(bHasTrailer ? TrailerID : UINT64_MAX);
		OsiClassification->set_role(static_cast<osi3::MovingObject_VehicleClassification_Role>(Role));
	});
	LightState->InitialDispatch();
}

void UVehicleClassification::Update()
{
	//TODO: Doesnt support changes yet

	LightState->Update();
}
