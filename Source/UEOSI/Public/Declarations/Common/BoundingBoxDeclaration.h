// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.h"
#include "BoundingBoxDeclaration.generated.h"

namespace osi3
{
	class Dimension3d;
}

/**
 * 
 */
UCLASS(Abstract)
class UEOSI_API UBoundingBoxDeclaration : public UDeclaration
{
	GENERATED_BODY()

public:
	void Initialize(osi3::Dimension3d* DimensionResource);


protected:

	osi3::Dimension3d* InternalDimension;

	void DispatchDimension(FVector Extent);
	
};
