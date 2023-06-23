// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declarations/Common/RotationDeclaration.h"
#include "RotationComponent.generated.h"

/**
 * 
 */
UCLASS(DisplayName="Rotation From Component")
class UEOSI_API URotationComponent : public URotationDeclaration
{
	GENERATED_BODY()

public:
	virtual void InitialDispatch() override;

	virtual void Update() override;

protected:

	//component to copy rotation from (World Space)
	UPROPERTY(EditAnywhere, Category="DECL", meta=(FullyExpand))
	FComponentReference ComponentRef;

	UPROPERTY()
	USceneComponent* Component;

	FRotator LastRotation;
	
};
