// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.h"
#include "TypeWrappers/SignEnumWrappers.h"
#include "SupplementarySignArrow.generated.h"

namespace osi3
{
	class TrafficSign_SupplementarySign_Classification_Arrow;
}

/**
 * 
 */
UCLASS()
class UEOSI_API USupplementarySignArrow : public UDeclaration
{
	GENERATED_BODY()

public:
	void Initialize(osi3::TrafficSign_SupplementarySign_Classification_Arrow* ArrowResource);

	virtual void InitialDispatch() override;

	virtual void Update() override;

	UFUNCTION(BlueprintCallable)
	const TArray<EArrowDirection>& GetDirections() { return Directions; }

protected:

	osi3::TrafficSign_SupplementarySign_Classification_Arrow* InternalArrow;

	//The IDs of the lanes the arrow applies to.
	UPROPERTY(EditAnywhere)
	TArray<uint64> LaneIDs;

	//The direction to which the arrow points to.
	UPROPERTY(EditAnywhere)
	TArray<EArrowDirection> Directions;
	
};
