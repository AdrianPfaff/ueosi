// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.h"
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

protected:

	osi3::StationaryObject_Classification* InternalClassification;
};
