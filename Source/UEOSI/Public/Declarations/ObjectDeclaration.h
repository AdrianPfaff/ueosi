// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.h"
#include "ObjectDeclaration.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class UEOSI_API UObjectDeclaration : public UDeclaration
{
	GENERATED_BODY()

public:
	virtual void Initialize() {}

protected:
};
