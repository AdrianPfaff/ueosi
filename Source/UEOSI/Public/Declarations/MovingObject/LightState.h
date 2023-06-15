// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.h"
#include "TypeWrappers/MovingObjectEnumWrappers.h"
#include "LightState.generated.h"

namespace osi3
{
	class MovingObject_VehicleClassification_LightState;
}

/**
 * 
 */
UCLASS()
class UEOSI_API ULightState : public UDeclaration
{
	GENERATED_BODY()

public:

	void Initialize(osi3::MovingObject_VehicleClassification_LightState* LightStateResource);

	virtual void InitialDispatch() override;

	virtual void Update() override;

protected:

	osi3::MovingObject_VehicleClassification_LightState* InternalLightState;

	UPROPERTY(EditAnywhere, Category="DECL")
	ELightIndicatorState IndicatorState;

	UPROPERTY(EditAnywhere, Category="DECL")
	EGenericLightState FrontFogLight;

	UPROPERTY(EditAnywhere, Category="DECL")
	EGenericLightState RearFogLight;

	UPROPERTY(EditAnywhere, Category="DECL")
	EGenericLightState HeadLight;

	UPROPERTY(EditAnywhere, Category="DECL")
	EGenericLightState HighBeam;

	UPROPERTY(EditAnywhere, Category="DECL")
	EGenericLightState ReversingLight;

	UPROPERTY(EditAnywhere, Category="DECL")
	EBrakeLightState BrakingLight;

	UPROPERTY(EditAnywhere, Category="DECL")
	EGenericLightState LicensePlateIlluminationRear;

	UPROPERTY(EditAnywhere, Category="DECL")
	EGenericLightState EmergencyVehicleIllumination;

	UPROPERTY(EditAnywhere, Category="DECL")
	EGenericLightState ServiceVehicleIllumination;
	
};
