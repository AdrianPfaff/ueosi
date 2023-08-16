// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.h"
#include "BaseMoving.generated.h"

class UBoundingBoxDeclaration;
class URotationDeclaration;
class UPositionDeclaration;

namespace osi3
{
	class BaseMoving;
}

/**
 * 
 */
UCLASS()
class UEOSI_API UBaseMoving : public UDeclaration
{
	GENERATED_BODY()


public:
	void Initialize(osi3::BaseMoving* MovingResource);

	virtual void InitialDispatch() override;

	virtual void Update() override;

protected:

	osi3::BaseMoving* InternalMoving;

	//The 3D dimension of the moving object (its bounding box). Note: The bounding box does NOT include side mirrors for vehicles.
	UPROPERTY(EditAnywhere)
	UBoundingBoxDeclaration* BoundingBoxDeclaration;

	//The reference point for position and orientation: the center (x,y,z) of the bounding box.
	UPROPERTY(EditAnywhere)
	UPositionDeclaration* PositionDeclaration;

	//The relative orientation of the moving object w.r.t. its parent frame, noted in the parent frame. The orientation becomes global/absolute if the parent frame is inertial (all parent frames up to ground truth). Originbase moving entity:=Rotationyaw,pitch,roll( orientation )∗(Originparent coord system− position ) Note: There may be some constraints how to align the orientation w.r.t. to some stationary object's or entity's definition.
	UPROPERTY(EditAnywhere)
	URotationDeclaration* RotationDeclaration;

	//The relative velocity of the moving object w.r.t. the parent frame, noted in the parent frame. The velocity becomes global/absolute if the parent frame does is inertial (all parent frames up to ground truth). position (t):= position (t−dt)+ velocity ∗dt
	//TODO: Add Velocity

	//The relative acceleration of the moving object w.r.t. its parent frame, noted in the parent frame. The acceleration becomes global/absolute if the parent frame is inertial (all parent frames up to ground truth). position (t):= position (t−dt)+ velocity ∗dt+ acceleration /2∗dt2 velocity (t):= velocity (t−dt)+ acceleration ∗dt
	//TODO: Add Acceleration

	//The relative orientation rate of the moving object w.r.t. its parent frame and parent orientation rate in the center point of the bounding box (origin of the bounding box frame), noted in the parent frame. The orientation becomes global/absolute if the parent frame is inertial (all parent frames up to ground truth). orientation .yaw(t):= orientation_rate .yaw(t)∗dt+ orientation .yaw(t−dt) orientation .pitch(t):= orientation_rate .pitch(t)∗dt+ orientation .pitch(t−dt) orientation .roll(t):= orientation_rate .roll(t)∗dt+ orientation .roll(t−dt)
	//TODO: Add OrientationRate

	//The relative orientation acceleration of the moving object w.r.t. its parent frame and parent orientation acceleration in the center point of the bounding box (origin of the bounding box frame), noted in the parent frame. The orientation becomes global/absolute if the parent frame is inertial (all parent frames up to ground truth). orientation_rate .yaw(t):= orientation_acceleration .yaw(t)∗dt+ orientation_rate .yaw(t−dt) orientation_rate .pitch(t):= orientation_acceleration .pitch(t)∗dt+ orientation_rate .pitch(t−dt) orientation_rate .roll(t):= orientation_acceleration .roll(t)∗dt+ orientation_rate .roll(t−dt)
	//TODO: Add OrientationAcceleration

	//Usage as ground truth: The two dimensional (flat) contour of the object.´This is an extension of the concept of a bounding box as defined by Dimension3d. The contour is the projection of the object's outline onto the z-plane in the object frame (independent of its current position and orientation). The height is the same as the height of the bounding box. Usage as sensor data: The polygon describes the visible part of the object's contour. General definitions: The polygon is defined in the local object frame: x pointing forward and y to the left. The origin is the center of the bounding box. As ground truth, the polygon is closed by connecting the last with the first point. Therefore these two points must be different. The polygon must consist of at least three points. As sensor data, however, the polygon is open. The polygon is defined counter-clockwise.
	//TODO: Add BasePolygon
	

	
};
