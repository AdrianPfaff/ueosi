// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declarations/ObjectDeclaration.h"
#include "TypeWrappers/MovingObjectEnumWrappers.h"
#include "MovingObject.generated.h"

class UMovingObjectClassification;
class UVehicleClassification;
class UVehicleAttributes;
class UBaseMoving;

namespace osi3
{
	class MovingObject;
}

/**
 * 
 */
UCLASS()
class UEOSI_API UMovingObject : public UObjectDeclaration
{
	GENERATED_BODY()


public:

	virtual void Initialize() override;

	virtual void InitialDispatch() override;
	
	virtual void Update() override;

protected:

	osi3::MovingObject* InternalObject;

	uint64 Identifier;

	UPROPERTY(EditAnywhere)
	UBaseMoving* BaseMovingDeclaration;

	UPROPERTY(EditAnywhere)
	EMovingObjectType Type;

	//TODO: Add assigned lane ids

	UPROPERTY(EditAnywhere)
	UVehicleAttributes* VehicleAttributes;

	UPROPERTY(EditAnywhere)
	UVehicleClassification* VehicleClassification;

	//TODO: Add model ref

	//TODO: Add trajectory

	UPROPERTY(EditAnywhere)
	UMovingObjectClassification* MovingObjectClassification;

	//TODO: source ref

	UPROPERTY(EditAnywhere)
	FColor ColorDescription;
};
