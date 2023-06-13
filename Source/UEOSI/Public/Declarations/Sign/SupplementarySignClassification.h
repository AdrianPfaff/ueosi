// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.h"
#include "TypeWrappers/SignEnumWrappers.h"
#include "SupplementarySignClassification.generated.h"

class UTrafficSignValue;
class USupplementarySignArrow;

namespace osi3
{
	enum TrafficSign_SupplementarySign_Classification_Actor : int;
	class TrafficSign_SupplementarySign_Classification;
}

/**
 * 
 */
UCLASS()
class UEOSI_API USupplementarySignClassification : public UDeclaration
{
	GENERATED_BODY()

public:

	void Initialize(osi3::TrafficSign_SupplementarySign_Classification* ClassificationResource);

	virtual void InitialDispatch() override;

	virtual void Update() override;

protected:

	osi3::TrafficSign_SupplementarySign_Classification* InternalClassification;

	UPROPERTY(EditAnywhere, Category="DECL")
	ETrafficSignVariability Variability;

	UPROPERTY(EditAnywhere, Category="DECL")
	ESupplementarySignType Type;

	UPROPERTY(EditAnywhere, Category="DECL")
	TArray<UTrafficSignValue*> Values;

	//TODO: Identifiers AssignedLaneIDs

	UPROPERTY(EditAnywhere, Category="DECL")
	TArray<ESignActor> Actors;

	UPROPERTY(EditAnywhere, Category="DECL")
	TArray<USupplementarySignArrow*> Arrows;
	
	UPROPERTY(EditAnywhere, Category="DECL")
	bool bIsOutOfService;

	UPROPERTY(EditAnywhere, Category="DECL")
	FString Country;

	UPROPERTY(EditAnywhere, Category="DECL")
	FString CountryRevision;

	UPROPERTY(EditAnywhere, Category="DECL")
	FString Code;

	UPROPERTY(EditAnywhere, Category="DECL")
	FString SubCode;

	//TODO: LogicalLaneAssignments

	

	
	
};
