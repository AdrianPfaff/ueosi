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

	UPROPERTY(EditAnywhere, Category="DECL")
	UBaseMoving* BaseMovingDeclaration;

	UPROPERTY(EditAnywhere, Category="DECL")
	EMovingObjectType Type;

	//TODO: Add assigned lane ids

	UPROPERTY(EditAnywhere, Category="DECL")
	UVehicleAttributes* VehicleAttributes;

	UPROPERTY(EditAnywhere, Category="DECL")
	UVehicleClassification* VehicleClassification;

	//TODO: Add model ref

	//TODO: Add trajectory

	UPROPERTY(EditAnywhere, Category="DECL")
	UMovingObjectClassification* MovingObjectClassification;

	//TODO: source ref

	UPROPERTY(EditAnywhere, Category="DECL")
	FColor ColorDescription;
};
