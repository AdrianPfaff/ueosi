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

	//radius_wheel would be here, but is deprecated and has been moved to WheelData

	UPROPERTY(EditAnywhere, Category="DECL")
	uint32 NumberOfWheels;

	//tODO: bbcentertorear

	//TODO: bbcentertofront

	UPROPERTY(EditAnywhere, Category="DECL")
	double GroundClearance;

	UPROPERTY()
	TArray<UWheelData*> WheelsData;

	
	//TODO: steering wheel angle
	
};
