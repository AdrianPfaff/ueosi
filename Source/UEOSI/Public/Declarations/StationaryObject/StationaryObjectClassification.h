// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.h"
#include "TypeWrappers/StationaryObjectEnumWrappers.h"
#include "StationaryObjectClassification.generated.h"

namespace osi3
{
	class StationaryObject_Classification;
}

/**
 * 
 */
UCLASS()
class UEOSI_API UStationaryObjectClassification : public UDeclaration
{
	GENERATED_BODY()

public:

	void Initialize(osi3::StationaryObject_Classification* ClassificationResource);

	virtual void InitialDispatch() override;

	virtual void Update() override;

	UFUNCTION(BlueprintPure)
	EStationaryObjectType GetObjectType() const { return Type; }

	UFUNCTION(BlueprintPure)
	EStationaryObjectMaterial GetObjectMaterial() const { return Material; }

	UFUNCTION(BlueprintPure)
	EStationaryObjectDensity GetObjectDensity() const { return Density; }
	
protected:

	osi3::StationaryObject_Classification* InternalClassification;

	//The type of the object.
	UPROPERTY(EditAnywhere)
	EStationaryObjectType Type;

	//The dominating material of the structure.
	UPROPERTY(EditAnywhere)
	EStationaryObjectMaterial Material;

	//The dominating density of the material of the structure.
	UPROPERTY(EditAnywhere)
	EStationaryObjectDensity Density;
	
	//color is deprecated, use color description of parent

	//The attributes of the emitting structure if stationary object is classified as such.
	//TODO: Add EmittingStructureAttribute
	

	//The IDs of the lanes that the object is assigned to.
	UPROPERTY(EditAnywhere)
	TArray<uint64> AssignedLaneIDs;

	//Percentage values of the object width in the corresponding lane.
	//TODO: Add assigned lane percentage
	//TArray<double> AssignedLanesPercentages;

	//Assignment of this object to logical lanes.
	//TODO: add lane assignment
	//TArray<LogicalLaneAssignment> LogicalLaneAssignments;
};
