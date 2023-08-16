// Copyright 2023 Adrian Pfaff


#include "Declarations/MovingObject/VehicleAttributes.h"

#include "osi_object.pb.h"
#include "Declarations/MovingObject/WheelData.h"

void UVehicleAttributes::Initialize(osi3::MovingObject_VehicleAttributes* AttributeResource)
{
	InternalAttributes=AttributeResource;

	for(auto WheelData : WheelsData)
	{
		WheelData->PreInit(GetWorld(), OsiSubsystem);
		WheelData->Initialize(InternalAttributes->add_wheel_data());
	}
	
}

void UVehicleAttributes::InitialDispatch()
{
	DispatchCommand([OsiAttributes=InternalAttributes, NumberOfWheels=NumberOfWheels, GroundClearance=GroundClearance, DriverID=DriverID]() mutable
	{
		OsiAttributes->mutable_driver_id()->set_value(DriverID);
		OsiAttributes->set_number_wheels(NumberOfWheels);
		OsiAttributes->set_ground_clearance(GroundClearance);
	});

	for(auto WheelData : WheelsData)
	{
		WheelData->InitialDispatch();
	}
}

void UVehicleAttributes::Update()
{
	//TODO: Does not support changes yet

	for(auto WheelData : WheelsData)
	{
		WheelData->Update();
	}
}
