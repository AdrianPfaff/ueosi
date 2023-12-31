// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declarations/Common/PositionDeclaration.h"
#include "PositionComponent.generated.h"

/**
 * 
 */
UCLASS(DisplayName="Position from Component")
class UEOSI_API UPositionComponent : public UPositionDeclaration
{
	GENERATED_BODY()

public:

	virtual void InitialDispatch() override;

	virtual void Update() override;

protected:

	//Component name to copy pos from (in World Space)
	UPROPERTY(EditAnywhere, meta=(FullyExpand))
	FComponentReference ComponentRef;

	UPROPERTY()
	USceneComponent* Component;

	FVector LastPosition;

};
