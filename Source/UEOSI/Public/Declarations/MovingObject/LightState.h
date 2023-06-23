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

	//State of the object's indicators.
	UPROPERTY(EditAnywhere, Category="DECL")
	ELightIndicatorState IndicatorState;

	//State of the front fog light.
	UPROPERTY(EditAnywhere, Category="DECL")
	EGenericLightState FrontFogLight;

	//State of the rear fog light.
	UPROPERTY(EditAnywhere, Category="DECL")
	EGenericLightState RearFogLight;

	//State of the head lights.
	UPROPERTY(EditAnywhere, Category="DECL")
	EGenericLightState HeadLight;

	//State of the high beam.
	UPROPERTY(EditAnywhere, Category="DECL")
	EGenericLightState HighBeam;

	//State of the reversing light.
	UPROPERTY(EditAnywhere, Category="DECL")
	EGenericLightState ReversingLight;

	//State of the brake lights.
	UPROPERTY(EditAnywhere, Category="DECL")
	EBrakeLightState BrakingLight;

	//State of the (rear) license plate illumination.
	UPROPERTY(EditAnywhere, Category="DECL")
	EGenericLightState LicensePlateIlluminationRear;

	//Lighting of emergency vehicles (ambulance, fire engine, police car, etc.). Must be set only if a vehicle is allowed to use this illumination type.
	UPROPERTY(EditAnywhere, Category="DECL")
	EGenericLightState EmergencyVehicleIllumination;

	//Lighting of service vehicles (snow removal, garbage truck, towing vehicle, slow or wide vehicle, etc.). Must be set only if a vehicle is allowed to use this illumination type.
	UPROPERTY(EditAnywhere, Category="DECL")
	EGenericLightState ServiceVehicleIllumination;
	
};
