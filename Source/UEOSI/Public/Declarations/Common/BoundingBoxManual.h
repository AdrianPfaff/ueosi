// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declarations/Common/BoundingBoxDeclaration.h"
#include "BoundingBoxManual.generated.h"

/**
 * 
 */
UCLASS(DisplayName="Manual Bounding Box")
class UEOSI_API UBoundingBoxManual : public UBoundingBoxDeclaration
{
	GENERATED_BODY()

public:

	virtual void InitialDispatch() override;

	virtual void Update() override;

	void SetExtent(const FVector& NewExtent) { Extent=NewExtent; bExtentHasChanged=true; }

protected:

	UPROPERTY(EditAnywhere, Category="DECL")
	FVector Extent;

	bool bExtentHasChanged=false;
	
};
