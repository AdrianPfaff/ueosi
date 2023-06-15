// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declarations/ObjectDeclaration.h"
#include "TypeWrappers/MovingObjectEnumWrappers.h"
#include "MovingObject.generated.h"

class UBaseMoving;

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

	UPROPERTY(EditAnywhere, Category="DECL")
	UBaseMoving* BaseMovingDeclaration;

	UPROPERTY(EditAnywhere, Category="DECL")
	EMovingObjectType Type;

	//TODO: Add assigned lane ids

	//vehicle attributes

	//vehicle class

	//model ref

	//trajectory

	//moving object class

	//source ref

	//color desc
};
