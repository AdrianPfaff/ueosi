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

	//The type of the vehicle.
	UPROPERTY(EditAnywhere, Category="DECL")
	EVehicleType Type;

	//The light state of the vehicle.
	UPROPERTY(EditAnywhere, Category="DECL")
	ULightState* LightState;

	//Flag defining whether the vehicle has an attached trailer.
	UPROPERTY(EditAnywhere, Category="DECL")
	bool bHasTrailer;

	//Id of the attached trailer.Note: Field need not be set if has_Trailer is set to false or use value for non valid id.
	UPROPERTY(EditAnywhere, Category="DECL")
	uint64 TrailerID;

	//The role of the vehicle.
	UPROPERTY(EditAnywhere, Category="DECL")
	EVehicleRole Role;
};
