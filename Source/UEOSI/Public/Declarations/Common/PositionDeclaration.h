// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.h"
#include "PositionDeclaration.generated.h"

namespace osi3
{
	class Vector3d;
}

/**
 * 
 */
UCLASS(Abstract)
class UEOSI_API UPositionDeclaration : public UDeclaration
{
	GENERATED_BODY()

public:

	void Initialize(osi3::Vector3d* PositionResource);

protected:

	osi3::Vector3d* InternalPosition;
	
};
