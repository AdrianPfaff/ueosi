// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.h"
#include "BaseStationary.generated.h"

namespace osi3
{
	class BaseStationary;
}

class UPositionDeclaration;
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
};
