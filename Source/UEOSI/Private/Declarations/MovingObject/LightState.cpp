// Copyright 2023 Adrian Pfaff


#include "Declarations/MovingObject/LightState.h"

#include "osi_object.pb.h"

void ULightState::Initialize(osi3::MovingObject_VehicleClassification_LightState* LightStateResource)
{
	InternalLightState=LightStateResource;
}

void ULightState::InitialDispatch()
{
	DispatchCommand([OsiLightState=InternalLightState, IndicatorState=IndicatorState, FrontFogLight=FrontFogLight, RearFogLight=RearFogLight, HeadLight=HeadLight, HighBeam=HighBeam, ReversingLight=ReversingLight, BrakingLight=BrakingLight, LicensePlateIlluminationRear=LicensePlateIlluminationRear, EmergencyVehicleIllumination=EmergencyVehicleIllumination, ServiceVehicleIllumination=ServiceVehicleIllumination]() mutable
	{
		OsiLightState->set_indicator_state(static_cast<osi3::MovingObject_VehicleClassification_LightState_IndicatorState>(IndicatorState));
		OsiLightState->set_front_fog_light(static_cast<osi3::MovingObject_VehicleClassification_LightState_GenericLightState>(FrontFogLight));
		OsiLightState->set_rear_fog_light(static_cast<osi3::MovingObject_VehicleClassification_LightState_GenericLightState>(RearFogLight));
		OsiLightState->set_head_light(static_cast<osi3::MovingObject_VehicleClassification_LightState_GenericLightState>(HeadLight));
		OsiLightState->set_high_beam(static_cast<osi3::MovingObject_VehicleClassification_LightState_GenericLightState>(HighBeam));
		OsiLightState->set_reversing_light(static_cast<osi3::MovingObject_VehicleClassification_LightState_GenericLightState>(ReversingLight));
		OsiLightState->set_brake_light_state(static_cast<osi3::MovingObject_VehicleClassification_LightState_BrakeLightState>(BrakingLight));
		OsiLightState->set_license_plate_illumination_rear(static_cast<osi3::MovingObject_VehicleClassification_LightState_GenericLightState>(LicensePlateIlluminationRear));
		OsiLightState->set_emergency_vehicle_illumination(static_cast<osi3::MovingObject_VehicleClassification_LightState_GenericLightState>(EmergencyVehicleIllumination));
		OsiLightState->set_service_vehicle_illumination(static_cast<osi3::MovingObject_VehicleClassification_LightState_GenericLightState>(ServiceVehicleIllumination));
	});
}

void ULightState::Update()
{
	//TODO: Does not support changes
}
