// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declarations/Common/RelativePositionDeclaration.h"
#include "RelativePositionComponent.generated.h"

/**
 * 
 */
UCLASS(DisplayName="Relative Position between two Components")
class UEOSI_API URelativePositionComponent : public URelativePositionDeclaration
{
	GENERATED_BODY()

public:
	virtual void InitialDispatch() override;

	virtual void Update() override;

protected:

	//reference frame component, for example car center
	UPROPERTY(EditAnywhere);
	FComponentReference OriginComponentRef;

	UPROPERTY()
	USceneComponent* OriginComponent;

	//target component, for example car wheel
	UPROPERTY(EditAnywhere)
	FComponentReference TargetComponentRef;

	UPROPERTY()
	USceneComponent* TargetComponent;

	FVector LastOriginLocation;

	FVector LastTargetLocation;
	
};
