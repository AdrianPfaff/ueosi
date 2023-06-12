// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.h"
#include "SupplementaryTrafficSign.generated.h"

class USupplementarySignClassification;
class UBaseStationary;

namespace osi3
{
	class TrafficSign_SupplementarySign;
}

/**
 * 
 */
UCLASS()
class UEOSI_API USupplementaryTrafficSign : public UDeclaration
{
	GENERATED_BODY()

public:

	void Initialize(osi3::TrafficSign_SupplementarySign* SignResource);

	virtual void InitialDispatch() override;

	virtual void Update() override;

protected:

	osi3::TrafficSign_SupplementarySign* InternalSign;

	UPROPERTY(EditAnywhere, Category="DECL"	)
	UBaseStationary* BaseStationary;

	UPROPERTY(EditAnywhere, Category="DECL"	)
	USupplementarySignClassification* SupplementaryClassification;

	//TODO: Supp Sign ModelReference
	
};
