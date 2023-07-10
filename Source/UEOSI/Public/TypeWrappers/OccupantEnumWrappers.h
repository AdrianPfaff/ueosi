// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EOccupantSeat : uint8
{
	SEAT_UNKNOWN = 0			UMETA(Hidden, DisplayName="Unknown", Tooltip="Seat position is unknown (must not be used in ground truth)."),
	SEAT_OTHER = 1				UMETA(DisplayName="Other", Tooltip="Other (unspecified but known) seat."),
	SEAT_FRONT_LEFT = 2			UMETA(DisplayName="Front Left", Tooltip="Seat position is in the front row, left seat. This is usually the driver's seat in right-hand traffic."),
	SEAT_FRONT_RIGHT = 3		UMETA(DisplayName="Front Right", Tooltip="Seat position is in the front row, right seat. This is usually the driver's seat in left-hand traffic."),
	SEAT_FRONT_MIDDLE = 4		UMETA(DisplayName="Front Middle", Tooltip="Seat position is in the front row, middle seat."),
	SEAT_BACK_LEFT = 5			UMETA(DisplayName="Back Left", Tooltip="Seat position is in the back row, left seat."),
	SEAT_BACK_RIGHT = 6			UMETA(DisplayName="Back Right", Tooltip="Seat position is in the back row, right seat."),
	SEAT_BACK_MIDDLE = 7		UMETA(DisplayName="Back Middle", Tooltip="Seat position is in the back row, middle seat."),
	SEAT_THIRD_ROW_LEFT = 8		UMETA(DisplayName="Third Row Left", Tooltip="Seat position is in the third row, left seat."),
	SEAT_THIRD_ROW_RIGHT = 9	UMETA(DisplayName="Third Row Right", Tooltip="Seat position is in the third row, right seat."),
	SEAT_THIRD_ROW_MIDDLE = 10	UMETA(DisplayName="Third Row Middle", Tooltip="Seat position is in the third row, middle seat.")
};

UENUM(BlueprintType)
enum class ESteeringControl : uint8
{
	STEERING_CONTROL_UNKNOWN = 0	UMETA(DisplayName="Unknown", Tooltip="Hands state is unknown (must not be used in ground truth)."),
	STEERING_CONTROL_OTHER = 1		UMETA(DisplayName="Other", Tooltip="Other (unspecified but known) hand positioning related to the steering wheel."),
	STEERING_CONTROL_NO_HAND = 2	UMETA(DisplayName="No Hand", Tooltip="Hands are not on the steering wheel."),
	STEERING_CONTROL_ONE_HAND = 3	UMETA(DisplayName="One Hand", Tooltip="One hand is on the steering wheel. Whether it is the left or right hand is unspecified or unknown. Note :If there is no differentiation between one or both hands on the steering wheel, this value should be used."),
	STEERING_CONTROL_BOTH_HANDS = 4	UMETA(DisplayName="Both Hands", Tooltip="Both hands are on the steering wheel."),
	STEERING_CONTROL_LEFT_HAND = 5	UMETA(DisplayName="Left Hand", Tooltip="Only left hand is on the steering wheel."),
	STEERING_CONTROL_RIGHT_HAND = 6	UMETA(DisplayName="Right Hand", Tooltip="Only right hand is on the steering wheel.")
};