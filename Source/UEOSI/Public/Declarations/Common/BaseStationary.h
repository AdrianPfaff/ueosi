// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.h"
#include "BaseStationary.generated.h"

class UBoundingBoxDeclaration;
class URotationDeclaration;
class UPositionDeclaration;

namespace osi3
{
	class BaseStationary;
}

/**
 * 
 */
UCLASS()
class UEOSI_API UBaseStationary : public UDeclaration
{
	GENERATED_BODY()

public:

	virtual void Initialize(osi3::BaseStationary* OsiResource);

	virtual void InitialDispatch() override;

	virtual void Update() override;


protected:
	
	osi3::BaseStationary* InternalBaseStationary;

	//The 3D dimensions of the stationary object (bounding box), e.g. a landmark.
	UPROPERTY(EditAnywhere)
	UBoundingBoxDeclaration* BoundingBoxDeclaration;

	//The reference point for position and orientation, i.e. the center (x,y,z) of the bounding box.
	UPROPERTY(EditAnywhere)
	UPositionDeclaration* PositionDeclaration;

	//The relative orientation of the stationary object w.r.t. its parent frame, noted in the parent frame. The orientation becomes global/absolute if the parent frame is inertial (all parent frames up to ground truth). Originbase stationary entity:=Rotationyaw,pitch,roll( orientation )∗(Originparent coord system− position ) Note: There may be some constraints how to align the orientation w.r.t. to some stationary object's or entity's definition. 
	UPROPERTY(EditAnywhere)
	URotationDeclaration* RotationDeclaration;

	//Usage as ground truth: The two dimensional (flat) contour of the object. This is an extension of the concept of a bounding box as defined by Dimension3d. The contour is the projection of the object's outline onto the z-plane in the object frame (independent of its current position and orientation). The height is the same as the height of the bounding box. Usage as sensor data: The polygon describes the visible part of the object's contour. General definitions: The polygon is defined in the local object frame: x pointing forward and y to the left. The origin is the center of the bounding box. As ground truth, the polygon is closed by connecting the last with the first point. Therefore these two points must be different. The polygon must consist of at least three points. As sensor data, however, the polygon is open. The polygon is defined counter-clockwise.
	//TODO: TArray<FVector2d> BasePolygons;
	
};
