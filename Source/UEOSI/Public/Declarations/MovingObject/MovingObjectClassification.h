// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.h"
#include "MovingObjectClassification.generated.h"

namespace osi3
{
	class MovingObject_MovingObjectClassification;
}

/**
 * 
 */
UCLASS()
class UEOSI_API UMovingObjectClassification : public UDeclaration
{
	GENERATED_BODY()

public:

	void Initialize(osi3::MovingObject_MovingObjectClassification* ClassificationResource);

	virtual void InitialDispatch() override;

	virtual void Update() override;
protected:

	osi3::MovingObject_MovingObjectClassification* InternalClassification;

	//The IDs of the lanes that this object is assigned to. Note: Might be multiple if the object is switching lanes or moving from one lane into another following lane
	//TODO: Add TArray<uint64> AssignedLaneIDs;

	//Percentage value of the object width in the corresponding lane. Note: Might be multiple if the object is switching lanes or moving from one lane into another following lane.
	//TODO: Add TArray<double> AssignedLanePercentages;

	//Assignment of this object to logical lanes.
	//TODO: AddLogicalLaneAssignments
	
};
