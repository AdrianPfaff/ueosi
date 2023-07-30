// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declarations/ObjectDeclaration.h"
#include "TrafficLight.generated.h"

class UBaseStationary;

namespace osi3
{
	class TrafficLight;
}

/**
 * 
 */
UCLASS()
class UEOSI_API UTrafficLight : public UObjectDeclaration
{
	GENERATED_BODY()

public:
	virtual void Initialize() override;

	virtual void InitialDispatch() override;
	
	virtual void Update() override;

protected:

	osi3::TrafficLight* InternalLight;

	uint64 Identifier;

	//The base parameters of the traffic light. BaseStationary::orientation x-axis is view normal of the traffic light's icon.
	UPROPERTY(EditAnywhere, Category="DECL")
	UBaseStationary* BaseStationary;

	//The classification data for the traffic light.


	//Opaque reference of an associated 3D model of the traffic light.
	//UPROPERTY(EditAnywhere, Category="DECL")
	//TODO: Add ModelReference

	//Optional external reference to the traffic light source. The external reference points to the source of the traffic light, if it is derived from one or more objects or external references. For example, to reference a signal defined in an OpenDRIVE map the items should be set as follows: reference = URI to map, can remain empty if identical with definition in GroundTruth::map_reference type = "net.asam.opendrive" identifier[0] = id of t_road_signals_signal Note: For non-ASAM Standards, it is implementation-specific how source_reference is resolved. The value has to be repeated, because one lane segment may be derived from more than one origin segment. Multiple sources may be added as reference as well, for example, a map and sensors.
	//TODO: Add External References
	//TArray<FExternalReference> ExternalReferences;

	//The visual color of the traffic light. Note: This does not represent the semantic classification but the visual appearance. For semantic classification of the traffic light use the color field in Classification. 
	UPROPERTY(EditAnywhere, Category="DECL")
	FColor ColorDescription;
};
