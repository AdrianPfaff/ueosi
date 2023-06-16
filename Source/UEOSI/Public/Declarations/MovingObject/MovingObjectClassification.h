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

	//TODO: Add AssignedLaneIDs

	//TODO: Add AssignedLanePercentages

	//TODO: AddLogicalLaneAssignments
	
};
