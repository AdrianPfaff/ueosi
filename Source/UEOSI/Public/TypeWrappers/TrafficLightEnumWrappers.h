// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class ETrafficLightColor : uint8
{
	COLOR_UNKNOWN = 0	UMETA(Hidden, DisplayName="Unknown", Tooltip="Color is unknown (must not be used in ground truth)."),
	COLOR_OTHER = 1		UMETA(DisplayName="Other", Tooltip="Other (unspecified but known) color."),
	COLOR_RED = 2		UMETA(DisplayName="Red", Tooltip="Red light."),
	COLOR_YELLOW = 3	UMETA(DisplayName="Yellow", Tooltip="Orange-yellow light."),
	COLOR_GREEN = 4		UMETA(DisplayName="Green", Tooltip="Green light."),
	COLOR_BLUE = 5		UMETA(DisplayName="Blue", Tooltip="Blue light."),
	COLOR_WHITE = 6		UMETA(DisplayName="White", Tooltip="White light.")
};

UENUM(BlueprintType)
enum class ETrafficLightIcon : uint8
{
	ICON_UNKNOWN = 0					UMETA(Hidden, DisplayName="Unknown", Tooltip="Unknown icon of traffic light (must not be used in ground truth)."),
	ICON_OTHER = 1						UMETA(DisplayName="Other", Tooltip="Other (unspecified but known) icon of traffic light."),
	ICON_NONE = 2						UMETA(DisplayName="None", Tooltip="This is a normal traffic light without specification of e.g. direction."),
	ICON_ARROW_STRAIGHT_AHEAD = 3		UMETA(DisplayName="Arrow Straight Ahead", Tooltip="This traffic light applies to the lane straight ahead"),
	ICON_ARROW_LEFT = 4					UMETA(DisplayName="Arrow Left", Tooltip="This traffic light applies to left turns."),
	ICON_ARROW_DIAG_LEFT = 5			UMETA(DisplayName="Arrow Diagonal Left", Tooltip="This traffic light applies to diagonal left turns."),
	ICON_ARROW_STRAIGHT_AHEAD_LEFT = 6	UMETA(DisplayName="Arrow Straight Ahead Left", Tooltip="This traffic light applies to a lane allowing to drive straight ahead or to turn left."),
	ICON_ARROW_RIGHT = 7				UMETA(DisplayName="Arrow Right", Tooltip="This traffic light applies to right turns."),
	ICON_ARROW_DIAG_RIGHT = 8			UMETA(DisplayName="Arrow Diagonal Right", Tooltip="This traffic light applies to diagonal right turns."),
	ICON_ARROW_STRAIGHT_AHEAD_RIGHT = 9	UMETA(DisplayName="Arrow Straight Ahead Right", Tooltip="This traffic light applies to a lane allowing to drive straight ahead or to turn right."),
	ICON_ARROW_LEFT_RIGHT = 10			UMETA(DisplayName="Arrow Left Right", Tooltip="This traffic light applies to a lane allowing to turn left or right."),
	ICON_ARROW_DOWN = 11				UMETA(DisplayName="Arrow Down", Tooltip="This traffic light indicates that the assigned lane is open for driving."),
	ICON_ARROW_DOWN_LEFT = 12			UMETA(DisplayName="Arrow Down Left", Tooltip="This traffic light indicates a necessary lane change to the left ahead."),
	ICON_ARROW_DOWN_RIGHT = 13			UMETA(DisplayName="Arrow Down Right", Tooltip="This traffic light indicates a necessary lane change to the right ahead."),
	ICON_ARROW_CROSS = 14				UMETA(DisplayName="Arrow Cross", Tooltip="This traffic light indicates that the assigned lane is not open for driving."),
	ICON_PEDESTRIAN = 15				UMETA(DisplayName="Pedestrian", Tooltip="This traffic light is valid for pedestrians."),
	ICON_WALK = 16						UMETA(DisplayName="Walk", Tooltip="This traffic light is valid for pedestrians with letters 'walk'."),
	ICON_DONT_WALK = 17					UMETA(DisplayName="Don't Walk", Tooltip="This traffic light is valid for pedestrians with letters 'don't walk'."),
	ICON_BICYCLE = 18					UMETA(DisplayName="Bicycle", Tooltip="This traffic light is valid for bicyclists."),
	ICON_PEDESTRIAN_AND_BICYCLE = 19	UMETA(DisplayName="Pedestrian and Bicycle", Tooltip="This traffic light is valid for pedestrians and bicyclists."),
	COUNTDOWN_SECONDS = 20				UMETA(DisplayName="Countdown Seconds", Tooltip="This traffic light counter in second."),
	COUNTDOWN_PERCENT = 21				UMETA(DisplayName="Countdown Percent", Tooltip="This traffic light counter in percent."),
	TRAM = 22							UMETA(DisplayName="Tran", Tooltip="This traffic light is valid for trams. Note: There is no detailed traffic light specification for trams and buses at the moment."),
	BUS = 23							UMETA(DisplayName="Bus", Tooltip="This traffic light is valid for buses. Note: There is no detailed traffic light specification for trams and buses at the moment."),
	BUS_AND_TRAM = 24					UMETA(DisplayName="Bus and Tram", Tooltip="This traffic light is valid for buses and trams. Note: There is no detailed traffic light specification for trams and buses at the moment.")
};

UENUM(BlueprintType)
enum class ETrafficLightMode : uint8
{
	MODE_UNKNOWN = 0	UMETA(Hidden, DisplayName="Unknown", Tooltip="Mode is unknown (must not be used in ground truth)."),
	MODE_OTHER = 1		UMETA(DisplayName="Other", Tooltip="Other (unspecified but known) mode."),
	MODE_OFF = 2		UMETA(DisplayName="Off", Tooltip="Traffic light is off."),
	MODE_CONSTANT = 3	UMETA(DisplayName="Constant", Tooltip="Light is on and not flashing."),
	MODE_FLASHING = 4	UMETA(DisplayName="Flashing", Tooltip="Light is flashing."),
	MODE_COUNTING = 5	UMETA(DisplayName="Counting", Tooltip="Light is counting.")
};
