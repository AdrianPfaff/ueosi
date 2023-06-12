// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.h"
#include "RotationDeclaration.generated.h"

namespace osi3
{
	class Orientation3d;
}

/**
 * 
 */
UCLASS(Abstract)
class UEOSI_API URotationDeclaration : public UDeclaration
{
	GENERATED_BODY()

public:

	void Initialize(osi3::Orientation3d* OrientationResource);


protected:

	osi3::Orientation3d* InternalOrientation;

	void DispatchRotation(FRotator Rotation);
};
