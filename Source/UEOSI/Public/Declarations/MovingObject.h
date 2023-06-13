// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declarations/ObjectDeclaration.h"
#include "MovingObject.generated.h"

namespace osi3
{
	class MovingObject;
}

/**
 * 
 */
UCLASS()
class UEOSI_API UMovingObject : public UObjectDeclaration
{
	GENERATED_BODY()


public:

	virtual void Initialize() override;

	virtual void InitialDispatch() override;
	
	virtual void Update() override;

protected:

	osi3::MovingObject* InternalObject;

	uint64 Identifier;
};
