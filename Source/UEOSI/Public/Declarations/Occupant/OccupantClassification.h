// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.h"
#include "TypeWrappers/OccupantEnumWrappers.h"
#include "OccupantClassification.generated.h"

namespace osi3
{
	class Occupant_Classification;
}

/**
 * 
 */
UCLASS()
class UEOSI_API UOccupantClassification : public UDeclaration
{
	GENERATED_BODY()

public:

	void Initialize(osi3::Occupant_Classification* ClassificationResource);

	virtual void InitialDispatch() override;

	virtual void Update() override;

	UFUNCTION(BlueprintPure)
	bool IsDriver() const { return bIsDriver; }

	UFUNCTION(BlueprintPure)
	EOccupantSeat GetSeat() const { return Seat; }

	UFUNCTION(BlueprintPure)
	ESteeringControl GetSteeringControl() const { return SteeringControl; }

protected:

	osi3::Occupant_Classification* InternalClassification;

	//Flag determining whether the person is the driver of the vehicle or a passenger.
	UPROPERTY(EditAnywhere, Category="DECL")
	bool bIsDriver;

	//Seat position of the vehicle occupant.
	UPROPERTY(EditAnywhere, Category="DECL")
	EOccupantSeat Seat;
	
	//Describes the state of the passenger's hands related to the steering wheel (mostly driver).
	UPROPERTY(EditAnywhere, Category="DECL")
	ESteeringControl SteeringControl;
};
