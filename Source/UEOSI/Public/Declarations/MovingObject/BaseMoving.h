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

	UPROPERTY(EditAnywhere, Category="DECL")
	UBoundingBoxDeclaration* BoundingBoxDeclaration;

	UPROPERTY(EditAnywhere, Category="DECL")
	UPositionDeclaration* PositionDeclaration;

	UPROPERTY(EditAnywhere, Category="DECL")
	URotationDeclaration* RotationDeclaration;

	//TODO: Add Velocity

	//TODO: Add Acceleration

	//TODO: Add OrientationRate

	//TODO: Add OrientationAcceleration

	//TODO: Add BasePolygon
	

	
};
