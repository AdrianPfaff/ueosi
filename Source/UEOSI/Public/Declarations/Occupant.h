// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declarations/ObjectDeclaration.h"
#include "Occupant.generated.h"

class UOccupantClassification;

namespace osi3
{
	class Occupant;
}

/**
 * 
 */
UCLASS()
class UEOSI_API UOccupant : public UObjectDeclaration
{
	GENERATED_BODY()

public:

	virtual void Initialize() override;

	virtual void InitialDispatch() override;
	
	virtual void Update() override;

protected:

	osi3::Occupant* InternalOccupant;

	//The ID of the driver.
	uint64 DriverID;

	//Specific information about the classification of the occupant.
	UPROPERTY(EditAnywhere)
	UOccupantClassification* Classification;

	//External reference to the occupant source. Note:For OpenDRIVE and OpenSCENARIO there is no direct counterpart. For non-ASAM Standards, it is implementation-specific how source_reference is resolved. The value has to be repeated because one object may be derived from more than one origin source, for example, from a scenario file and from sensors. 
	//TODO: Add TArray<ExternalReference>

};
