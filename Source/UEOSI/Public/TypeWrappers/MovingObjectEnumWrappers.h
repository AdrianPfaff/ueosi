// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EMovingObjectType : uint8
{
    TYPE_UNKNOWN = 0	UMETA(Hidden, DisplayName="Unknown", Tooltip="Type of the object is unknown (must not be used in ground truth)."),
	TYPE_OTHER = 1		UMETA(DisplayName="Other", Tooltip="Other (unspecified but known) type of moving object."),
	TYPE_VEHICLE = 2	UMETA(DisplayName="Vehicle", Tooltip="Object is a vehicle."),
	TYPE_PEDESTRIAN = 3	UMETA(DisplayName="Pedestrian", Tooltip="Object is a pedestrian."),
	TYPE_ANIMAL = 4		UMETA(DisplayName="Animal", Tooltip="Object is an animal.")
};

UENUM(BlueprintType)
enum class EVehicleType : uint8
{
	TYPE_UNKNOWN = 0			UMETA(Hidden, DisplayName="Unknown", Tooltip="Type of vehicle is unknown (must not be used in ground truth)."),
	TYPE_OTHER = 1				UMETA(DisplayName="Other", Tooltip="Other (unspecified but known) type of vehicle."),
	TYPE_SMALL_CAR = 2			UMETA(DisplayName="Small Car", Tooltip="Vehicle is a small car. Definition: Hatchback car with maximum length 4 m."),
	TYPE_COMPACT_CAR = 3		UMETA(DisplayName="Compact Car", Tooltip="Vehicle is a compact car. Definition: Hatchback car with length between 4 and 4.5 m"),
	TYPE_MEDIUM_CAR = 4			UMETA(DisplayName="Medium Car", Tooltip="Vehicle is a medium car. Definition: Hatchback or sedan with lenght between 4.5 and 5 m."),
	TYPE_LUXURY_CAR = 5			UMETA(DisplayName="Luxury Car", Tooltip="Vehicle is a luxury car. Definition: Sedan or coupe that is longer then 5 m."),
  	TYPE_DELIVERY_VAN = 6		UMETA(DisplayName="Delivery Van", Tooltip="Vehicle is a delivery van."),
  	TYPE_HEAVY_TRUCK = 7		UMETA(DisplayName="Heavy Truck", Tooltip="Vehicle is a (heavy) truck."),
  	TYPE_SEMITRACTOR = 16		UMETA(DisplayName="Semi Tractor", Tooltip="Vehicle is a tractor capable of pulling a semi-trailer."),
	TYPE_SEMITRAILER = 8		UMETA(DisplayName="Semi Trailer", Tooltip="This vehicle is a semi-trailer that can be pulled by a semi-tractor. Note The vehicle can be, but doesn't need to be, attached to another vehicle."),
	TYPE_TRAILER = 9			UMETA(DisplayName="Trailer", Tooltip="Vehicle is a trailer. Note The vehicle can be, but doesn't need to be, attached to another vehicle."),
  	TYPE_MOTORBIKE = 10			UMETA(DisplayName="Motorbike", Tooltip="Vehicle is a motorbike or moped."),
  	TYPE_BICYCLE = 11			UMETA(DisplayName="Bicycle", Tooltip="Vehicle is a bicycle (without motor and specific lights)."),
  	TYPE_BUS = 12				UMETA(DisplayName="Bus", Tooltip="Vehicle is a bus."),
  	TYPE_TRAM = 13				UMETA(DisplayName="Tram", Tooltip="Vehicle is a tram."),
  	TYPE_TRAIN = 14				UMETA(DisplayName="Train", Tooltip="Vehicle is a train."),
  	TYPE_WHEELCHAIR = 15		UMETA(DisplayName="Wheelchair", Tooltip="Vehicle is a wheelchair."),
  	TYPE_STANDUP_SCOOTER = 17	UMETA(DisplayName="Standup Scooter", Tooltip="Vehicle is a stand-up or kickboard scooter, including motorized versions.")
};

UENUM(BlueprintType)
enum class EVehicleRole : uint8
{
	ROLE_UNKNOWN = 0			UMETA(Hidden, DisplayName="Unknown", Tooltip="Role of vehicle is unknown (must not be used in ground truth)."),
	ROLE_OTHER = 1				UMETA(DisplayName="Other", Tooltip="Other (unspecified but known) role of vehicle."),
	ROLE_CIVIL = 2				UMETA(DisplayName="Civil", Tooltip="The vehicle role is civil, e.g. a \"normal\" car."),
  	ROLE_AMBULANCE = 3			UMETA(DisplayName="Ambulance", Tooltip="The vehicle role is ambulance."),
	ROLE_FIRE = 4				UMETA(DisplayName="Fire", Tooltip="The vehicle role is fire fighting, e.g. fire engine."),
  	ROLE_POLICE = 5				UMETA(DisplayName="Police", Tooltip="The vehicle role is police."),
	ROLE_PUBLIC_TRANSPORT = 6	UMETA(DisplayName="Public Transport", Tooltip="The vehicle role is public transport, e.g. a school bus."),
	ROLE_ROAD_ASSISTANCE = 7	UMETA(DisplayName="Road Assistance", Tooltip="The vehicle role is roadside assistance, e.g. tow truck."),
	ROLE_GARBAGE_COLLECTION = 8	UMETA(DisplayName="Garbage Collection", Tooltip="The vehicle role is garbage collection, e.g. a garbage truck or sweeper."),
	ROLE_ROAD_CONSTRUCTION = 9	UMETA(DisplayName="Road Construction", Tooltip="The vehicle role is road construction, e.g. a excavator or tipper truck."),
	ROLE_MILITARY = 10			UMETA(DisplayName="Military", Tooltip="The vehicle role is military, e.g. camouflaged truck.")
};

UENUM(BlueprintType)
enum class ELightIndicatorState : uint8
{
	INDICATOR_STATE_UNKNOWN = 0 UMETA(Hidden, DisplayName="Unknown", Tooltip="Indicator state is unknown (must not be used in ground truth)."),
  	INDICATOR_STATE_OTHER = 1	UMETA(DisplayName="Other", Tooltip="Other (unspecified but known) state of indicator."),
  	INDICATOR_STATE_OFF = 2		UMETA(DisplayName="Off", Tooltip="Indicators are off."),
  	INDICATOR_STATE_LEFT = 3	UMETA(DisplayName="Left", Tooltip="Left indicator is on."),
  	INDICATOR_STATE_RIGHT = 4	UMETA(DisplayName="Right", Tooltip="Right indicator is on."),
	INDICATOR_STATE_WARNING = 5	UMETA(DisplayName="Warning", Tooltip="Hazard/warning light, i.e. both indicators, are on.")
};

UENUM(BlueprintType)
enum class EGenericLightState : uint8
{
	GENERIC_LIGHT_STATE_UNKNOWN = 0					UMETA(Hidden, DisplayName="Unknown", Tooltip="Light state is unknown (must not be used in ground truth)."),
	GENERIC_LIGHT_STATE_OTHER = 1					UMETA(DisplayName="Other", Tooltip="Other (unspecified but known) state of light."),
	GENERIC_LIGHT_STATE_OFF = 2						UMETA(DisplayName="Off", Tooltip="Light is off."),
	GENERIC_LIGHT_STATE_ON = 3						UMETA(DisplayName="On", Tooltip="Light is on."),
	GENERIC_LIGHT_STATE_FLASHING_BLUE = 4			UMETA(DisplayName="Flashing Blue", Tooltip="Light is flashing blue. To be used for emergency vehicles."),
	GENERIC_LIGHT_STATE_FLASHING_BLUE_AND_RED = 5	UMETA(DisplayName="Flashing Blue and Red", Tooltip="Light is flashing blue and red. To be used for emergency vehicles."),
	GENERIC_LIGHT_STATE_FLASHING_AMBER = 6			UMETA(DisplayName="Flashing Amber", Tooltip="Light is flashing amber. To be used for service vehicles.")
};

UENUM(BlueprintType)
enum class EBrakeLightState : uint8
{
	BRAKE_LIGHT_STATE_UNKNOWN = 0	UMETA(Hidden, DisplayName="Unknown", Tooltip="Brake light state is unknown (must not be used in ground truth)."),
	BRAKE_LIGHT_STATE_OTHER = 1		UMETA(DisplayName="Other", Tooltip="Other (unspecified but known) state of brake light."),
	BRAKE_LIGHT_STATE_OFF = 2		UMETA(DisplayName="Off", Tooltip="Brake lights are off."),
	BRAKE_LIGHT_STATE_NORMAL = 3	UMETA(DisplayName="Normal", Tooltip="Brake lights are on with normal intensity."),
	BRAKE_LIGHT_STATE_STRONG = 4	UMETA(DisplayName="Strong", Tooltip="Brake lights are on with extra bright intensity (indicating stronger braking).")
};