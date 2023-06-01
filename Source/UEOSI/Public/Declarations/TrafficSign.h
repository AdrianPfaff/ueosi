// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declarations/ObjectDeclaration.h"
#include "..\TypeWrappers\SignStructWrappers.h"
#include "TrafficSign.generated.h"

/**
 * 
 */
UCLASS()
class UEOSI_API UTrafficSign : public UObjectDeclaration
{
	GENERATED_BODY()


public:

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="DECL")
	FMainTrafficSignData MainSign;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="DECL")
	TArray<FSupplementaryTrafficSignData> SupplementarySigns;
};
