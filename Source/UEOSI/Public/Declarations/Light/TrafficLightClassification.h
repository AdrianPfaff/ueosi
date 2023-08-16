// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.h"
#include "TypeWrappers/TrafficLightEnumWrappers.h"
#include "TrafficLightClassification.generated.h"

namespace osi3
{
	class TrafficLight_Classification;
}

/**
 * 
 */
UCLASS()
class UEOSI_API UTrafficLightClassification : public UDeclaration
{
	GENERATED_BODY()

public:
	void Initialize(osi3::TrafficLight_Classification* ClassificationResource);

	virtual void InitialDispatch() override;

	virtual void Update() override;


	UFUNCTION(BlueprintPure)
	ETrafficLightColor GetColor() const { return Color; }

	UFUNCTION(BlueprintPure)
	ETrafficLightIcon GetIcon() const { return Icon; }

	UFUNCTION(BlueprintPure)
	ETrafficLightMode GetMode() const { return Mode; }

	UFUNCTION(BlueprintPure)
	double GetCounter() const { return Counter; }

	UFUNCTION(BlueprintPure)
	bool GetIsOutOfService() const { return bIsOutOfService; }

protected:

	osi3::TrafficLight_Classification* InternalClassification;

	//The semantic color of the traffic light. Note: The color types represent the semantic color classification of a traffic light only. They do not represent an actual visual appearance. If the color of the traffic light is known (from history or geometrical arrangement) and the state mode is MODE_OFF then color could remain unchanged. If traffic light displays images in different colors and traffic light is off ( mode = MODE_OFF), then color = COLOR_OTHER.
	UPROPERTY(EditAnywhere)
	ETrafficLightColor Color;

	//The icon of the traffic light.
	UPROPERTY(EditAnywhere)
	ETrafficLightIcon Icon;
	
	//The operating mode of the traffic light.
	UPROPERTY(EditAnywhere)
	ETrafficLightMode Mode;

	//The value of the countdown counter. Unit: % or s  Note: Set value only if traffic light bulb is a countdown counter.
	UPROPERTY(EditAnywhere)
	double Counter=-1;

	//The IDs of the lanes that the traffic light is assigned to.Might be multiple if the traffic light is valid for multiple driving lanes.
	//TODO: Add assigned Lane IDs

	//Boolean flag to indicate that the traffic light is taken out of service. This can be achieved by visibly crossing the light, covering it completely or swiching the traffic light off.
	UPROPERTY(EditAnywhere)
	bool bIsOutOfService;
	
	//Assignment of this object to logical lanes.
	//TODO: Add logical lane assignment

};
