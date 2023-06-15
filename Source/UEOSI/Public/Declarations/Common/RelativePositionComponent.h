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

	UPROPERTY(EditAnywhere, Category="DECL");
	FComponentReference OriginComponentRef;

	UPROPERTY()
	USceneComponent* OriginComponent;

	UPROPERTY(EditAnywhere, Category="DECL")
	FComponentReference TargetComponentRef;

	UPROPERTY()
	USceneComponent* TargetComponent;

	FVector LastOriginLocation;

	FVector LastTargetLocation;
	
};
