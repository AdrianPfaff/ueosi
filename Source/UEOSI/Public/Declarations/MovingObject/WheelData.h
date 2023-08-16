// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.h"
#include "WheelData.generated.h"

class URotationDeclaration;
class URelativePositionDeclaration;

namespace osi3
{
	class MovingObject_VehicleAttributes_WheelData;
}

/**
 * 
 */
UCLASS()
class UEOSI_API UWheelData : public UDeclaration
{
	GENERATED_BODY()


public:

	void Initialize(osi3::MovingObject_VehicleAttributes_WheelData* WheelResource);

	virtual void InitialDispatch() override;

	virtual void Update() override;


protected:

	osi3::MovingObject_VehicleAttributes_WheelData* InternalWheel;

	//The axle which contains this wheel. A value of 0 represents the front-most axle of the vehicle with higher numbers incrementing towards the rear-most axle.
	UPROPERTY(EditAnywhere)
	uint32 Axle;

	//The index of the wheel on the axle, counting in the direction of positive-y, that is, right-to-left. For example, on a standard 2-axle, 4-wheel car, the rear-right wheel would be (axle=1, index=0). This concept works also for twin tires.
	UPROPERTY(EditAnywhere)
	uint32 Index;

	//A vector pointing from the vehicle's reference system (center of bounding box) to the geometric center of the wheel.
	UPROPERTY(EditAnywhere)
	URelativePositionDeclaration* PositionDeclaration;

	//Median radius of the wheel measured from the center of the wheel to the outer part of the tire. Unit: m
	UPROPERTY(EditAnywhere)
	double WheelRadius;

	//Median radius of the rim measured from the center to the outer, visible part of the rim. Unit: m
	UPROPERTY(EditAnywhere)
	double RimRadius;

	//Median width of the tire. Unit: m
	UPROPERTY(EditAnywhere)
	double Width;

	//Orientation of the wheel. The reference system is the vehicle frame (center of bounding box).
	UPROPERTY(EditAnywhere)
	URotationDeclaration* RotationDeclaration;

	//Rotation rate of the wheel. The rotation rate around the y-axis with respect to the wheel's coordinate system.b Unit: rad/s.
	//TODO: Add rotation rate

	//Opaque reference of an associated 3D model of the wheel.
	//TODO: Add ModelReference

	//The value describes the kinetic friction of the tyre's contact point. If different friction coefficients due to more than one contact points are available, this value contains the average. Unit: Dimensionless
	//TODO: add friction coefficient
};
