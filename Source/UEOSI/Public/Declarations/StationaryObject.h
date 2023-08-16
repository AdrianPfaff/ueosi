// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declarations/ObjectDeclaration.h"
#include "StationaryObject.generated.h"

namespace osi3
{
	class StationaryObject;
}

/**
 * 
 */
UCLASS()
class UEOSI_API UStationaryObject : public UObjectDeclaration
{
	GENERATED_BODY()


public:

	virtual void Initialize() override;

	virtual void InitialDispatch() override;
	
	virtual void Update() override;

	UFUNCTION(BlueprintPure)
	class UBaseStationary* GetBaseStationary() const { return BaseStationary; }

	UFUNCTION(BlueprintPure)
	FColor GetColorDescription() const { return ColorDescription; }
	
protected:

	osi3::StationaryObject* InternalStationary;

	uint64 Identifier;


	//The base parameters of the stationary object.
	UPROPERTY(EditAnywhere)
	class UBaseStationary* BaseStationary;

	//The classification of the stationary object.
	UPROPERTY(EditAnywhere)
	class UStationaryObjectClassification* ObjectClassification;

	//Opaque reference of an associated 3D model of the stationary object.
	UPROPERTY(EditAnywhere)
	FString ModelReference;
	
	//External reference to the stationary-object source. The external reference points to the source of a stationary object, if it is derived from an external sources like OpenDRIVE or OpenSCENARIO.
	//TODO: Add Source reference
	
	//The dominating color of the material of the structure.
	UPROPERTY(EditAnywhere)
	FColor ColorDescription;
};
