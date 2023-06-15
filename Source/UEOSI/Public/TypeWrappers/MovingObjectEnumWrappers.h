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