// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.h"
#include "BaseStationary.generated.h"

class URotationDeclaration;
class UPositionDeclaration;

namespace osi3
{
	class BaseStationary;
}

/**
 * 
 */
UCLASS()
class UEOSI_API UBaseStationary : public UDeclaration
{
	GENERATED_BODY()

public:

	virtual void Initialize(osi3::BaseStationary* OsiResource);

	virtual void InitialDispatch() override;

	virtual void Update() override;


protected:
	
	osi3::BaseStationary* InternalBaseStationary;

	UPROPERTY(EditAnywhere, Category="DECL")
	UPositionDeclaration* PositionDeclaration;

	UPROPERTY(EditAnywhere, Category="DECL")
	URotationDeclaration* RotationDeclaration;
};
