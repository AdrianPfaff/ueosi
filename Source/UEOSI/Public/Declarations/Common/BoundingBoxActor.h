// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declarations/Common/BoundingBoxDeclaration.h"
#include "BoundingBoxActor.generated.h"

/**
 * 
 */
UCLASS(DisplayName="Bounding Box From Actor")
class UEOSI_API UBoundingBoxActor : public UBoundingBoxDeclaration
{
	GENERATED_BODY()


public:

	virtual void InitialDispatch() override;

	virtual void Update() override;

protected:

	//actor to copy bounding box from
	UPROPERTY()
	AActor* Actor;

	FVector LastExtent;
};
