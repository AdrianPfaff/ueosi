// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.h"
#include "VehicleAttributes.generated.h"

class UWheelData;

namespace osi3
{
	class MovingObject_VehicleAttributes;
}

/**
 * 
 */
UCLASS()
class UEOSI_API UVehicleAttributes : public UDeclaration
{
	GENERATED_BODY()


public:

	void Initialize(osi3::MovingObject_VehicleAttributes* AttributeResource);

	virtual void InitialDispatch() override;

	virtual void Update() override;


protected:
	osi3::MovingObject_VehicleAttributes* InternalAttributes;

	//The ID of the driver of the (host) vehicle. Note: Field need not be set if host_vehicle is set to false or use value for non valid id.
	UPROPERTY(EditAnywhere, Category="DECL")
	uint64 DriverID;

	//radius_wheel would be here, but is deprecated and has been moved to WheelData

	//Number of independent wheels.
	UPROPERTY(EditAnywhere, Category="DECL")
	uint32 NumberOfWheels;

	//The vector pointing from the bounding box center point (MovingObject::base. BaseMoving::position) to the middle (in x, y and z) of the rear axle under neutral load conditions. In object coordinates.
	//tODO: bbcentertorear

	//The vector pointing from the bounding box center point (MovingObject::base. BaseMoving::position) to the middle (in x, y and z) of the front axle under neutral load conditions. In object coordinates.
	//TODO: bbcentertofront

	//Static minimal distance or space from the lowest point of the vehicle's body to the surface plane below it under neutral load conditions. This distance disregards, for example, driving-dynamic effects or road-surface effects. Can be useful to approximate the clearance area under a vehicle that a sensor can see through. Note: ground_clearance is included in the bounding box height.
	UPROPERTY(EditAnywhere, Category="DECL")
	double GroundClearance;

	//Description of each wheel.
	UPROPERTY()
	TArray<UWheelData*> WheelsData;

	//Angle of the steering wheel. Zero means the steering wheel is in its center postion, a positive value means the steering wheel is turned to the left and a negative value means the steering wheel is turned to the right of the center position. Unit: rad
	//TODO: steering wheel angle
	
};
