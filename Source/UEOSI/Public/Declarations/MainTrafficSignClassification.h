// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.h"
#include "TypeWrappers/SignEnumWrappers.h"
#include "MainTrafficSignClassification.generated.h"

class UTrafficSignValue;

namespace osi3
{
	class TrafficSign_MainSign_Classification;
}

/**
 * 
 */
UCLASS()
class UEOSI_API UMainTrafficSignClassification : public UDeclaration
{
	GENERATED_BODY()


public:

	void Initialize(osi3::TrafficSign_MainSign_Classification* ClassificationResource);

	virtual void InitialDispatch() override;

	virtual void Update() override;


protected:

	osi3::TrafficSign_MainSign_Classification* InternalClassification;

	UPROPERTY(EditAnywhere, Category="DECL")
	ETrafficSignVariability Variability;
	
	UPROPERTY(EditAnywhere, Category="DECL")
	EMainSignType Type;

	UPROPERTY(EditAnywhere, Category="DECL")
	UTrafficSignValue* ValueDeclaration;

	UPROPERTY(EditAnywhere, Category="DECL")
	ESignDirectionScope DirectionScope;

	//TODO: Add Identifier

	UPROPERTY(EditAnywhere, Category="DECL")
	bool bVerticallyMirrored;
	
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

	//TODO: Logical Lane Assignment
	
	
};
