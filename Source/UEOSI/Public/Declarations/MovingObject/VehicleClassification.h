// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.h"
#include "TypeWrappers/MovingObjectEnumWrappers.h"
#include "VehicleClassification.generated.h"

class ULightState;

namespace osi3
{
	class MovingObject_VehicleClassification;
}

/**
 * 
 */
UCLASS()
class UEOSI_API UVehicleClassification : public UDeclaration
{
	GENERATED_BODY()


public:
	void Initialize(osi3::MovingObject_VehicleClassification* ClassificationResource);

	virtual void InitialDispatch() override;

	virtual void Update() override;

protected:
	osi3::MovingObject_VehicleClassification* InternalClassification;

	UPROPERTY(EditAnywhere, Category="DECL")
	EVehicleType Type;

	UPROPERTY(EditAnywhere, Category="DECL")
	ULightState* LightState;

	UPROPERTY(EditAnywhere, Category="DECL")
	bool bHasTrailer;

	UPROPERTY(EditAnywhere, Category="DECL")
	uint64 TrailerID;


	UPROPERTY(EditAnywhere, Category="DECL")
	EVehicleRole Role;
};
