// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declarations/ObjectDeclaration.h"
#include "StationaryObject.generated.h"

namespace osi3
{
	class StationaryObject;
}

/**
 * 
 */
UCLASS()
class UEOSI_API UStationaryObject : public UObjectDeclaration
{
	GENERATED_BODY()


public:

	virtual void Initialize() override;

	virtual void InitialDispatch() override;
	
	virtual void Update() override;

protected:

	osi3::StationaryObject* InternalStationary;

	uint64 Identifier;


	UPROPERTY(EditAnywhere, Category="DECL")
	class UBaseStationary* BaseStationary;
};
