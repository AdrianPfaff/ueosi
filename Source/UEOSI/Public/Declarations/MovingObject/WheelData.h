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

	UPROPERTY(EditAnywhere, Category="DECL")
	uint32 Axle;

	UPROPERTY(EditAnywhere, Category="DECL")
	uint32 Index;

	UPROPERTY(EditAnywhere, Category="DECL")
	URelativePositionDeclaration* PositionDeclaration;

	UPROPERTY(EditAnywhere, Category="DECL")
	double WheelRadius;

	UPROPERTY(EditAnywhere, Category="DECL")
	double RimRadius;

	UPROPERTY(EditAnywhere, Category="DECL")
	double Width;

	UPROPERTY(EditAnywhere, Category="DECL")
	URotationDeclaration* RotationDeclaration;

	//TODO: Add rotation rate

	//TODO: Add ModelReference

	//TODO: add friction coefficient
};
