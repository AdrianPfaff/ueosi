// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declarations/ObjectDeclaration.h"
#include "TrafficSign.generated.h"

class UMainTrafficSignClassification;
class UBaseStationary;
class USupplementaryTrafficSign;

namespace osi3
{
	class TrafficSign;
}
/**
 * 
 */
UCLASS()
class UEOSI_API UTrafficSign : public UObjectDeclaration
{
	GENERATED_BODY()


public:

	virtual void Initialize() override;

	virtual void InitialDispatch() override;
	
	virtual void Update() override;

	UFUNCTION(BlueprintPure)
	UBaseStationary* GetMainSignBaseStationary() const { return MainSignBaseStationary; }

	UFUNCTION(BlueprintPure)
	UMainTrafficSignClassification* GetMainSignClassification() const { return MainSignClassification; }

	UFUNCTION(BlueprintCallable)
	const TArray<USupplementaryTrafficSign*>& GetSupplementarySigns() const { return SupplementarySigns; }

protected:

	osi3::TrafficSign* InternalSign;

	uint64 Identifier;

	//The orientation of the bounding box base ( BaseStationary::orientation ) is defined as follows: The z-axis of the given BaseStationary::orientation is the vector from the bottom to the top of the traffic sign's 2D image plate. (Normally it is equal to the ground truth z-axis.) The x-axis of the given BaseStationary::orientation is view normal of the traffic sign's image. This x-axis points from the traffic sign's image in the direction from where a 'viewer' could see the traffic sign image. 
	UPROPERTY(EditAnywhere, Category="DECL")
	UBaseStationary* MainSignBaseStationary;

	//Main sign, e.g. speed limit 30 km/h
	UPROPERTY(EditAnywhere, Category="DECL")
	UMainTrafficSignClassification* MainSignClassification;

	//TODO: Main Sign ModelReference
	
	//Additional supplementary signs, e.g. time limits, modifying the traffic sign.
	UPROPERTY(EditAnywhere, Category="DECL")
	TArray<USupplementaryTrafficSign*> SupplementarySigns;

	//TODO: Optional external reference to the traffic sign source. The external reference point to the source of the traffic sign, if it is derived from one or more objects or external references. For example, to reference a signal defined in an OpenDRIVE map the items should be set as follows: reference = URI to map, can remain empty if identical with definition in GroundTruth::map_reference type = \"net.asam.opendrive\" identifier[0] = id of t_road_signals_signal  Note For non-ASAM Standards, it is implementation-specific how source_reference is resolved. If an individual identification of MainSign and SupplementarySign is necessary, this should be done via multiple individual entries of this source_reference. The value has to be repeated, because one lane segment may be derived from more than one origin segment. Multiple sources may be added as reference as well, for example, a map and sensors. 
	//TArray<FExternalReference> ExternalReferences;
};
