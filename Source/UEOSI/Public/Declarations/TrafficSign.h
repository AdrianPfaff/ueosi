// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declarations/ObjectDeclaration.h"
#include "TrafficSign.generated.h"

class UBaseStationary;

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

protected:

	osi3::TrafficSign* InternalSign;

	//The ID of the traffic sign.
	//FIdentifier Identifier;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Instanced, Category="DECL")
	UBaseStationary* MainSignBaseStationary;
	
	//Additional supplementary signs, e.g. time limits, modifying the traffic sign.
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="DECL")
	//TArray<FSupplementaryTrafficSignData> SupplementarySigns;

	//Optional external reference to the traffic sign source. The external reference point to the source of the traffic sign, if it is derived from one or more objects or external references. For example, to reference a signal defined in an OpenDRIVE map the items should be set as follows: reference = URI to map, can remain empty if identical with definition in GroundTruth::map_reference type = \"net.asam.opendrive\" identifier[0] = id of t_road_signals_signal  Note For non-ASAM Standards, it is implementation-specific how source_reference is resolved. If an individual identification of MainSign and SupplementarySign is necessary, this should be done via multiple individual entries of this source_reference. The value has to be repeated, because one lane segment may be derived from more than one origin segment. Multiple sources may be added as reference as well, for example, a map and sensors. 
	//TArray<FExternalReference> ExternalReferences;
};
