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

	//Variability.
	UPROPERTY(EditAnywhere, Category="DECL")
	ETrafficSignVariability Variability;

	//Type of the supplementary sign.
	UPROPERTY(EditAnywhere, Category="DECL")
	ESupplementarySignType Type;

	//Additional value(s) associated with the traffic sign, e.g. length, mass or starting time in time range. Note: Field need not be set if traffic sign type does not require it.
	UPROPERTY(EditAnywhere, Category="DECL")
	TArray<UTrafficSignValue*> Values;

	//The IDs of the lanes that the sign is assigned to.May be multiple if the sign is valid for multiple lanes.
	UPROPERTY(EditAnywhere, Category="DECL")
	TArray<uint64> AssignedLaneIDs;

	//This enumerator indicates a traffic actor (e.g. bikes, cars, trucks and so on), that the supplementary sign makes reference to.
	UPROPERTY(EditAnywhere, Category="DECL")
	TArray<ESignActor> Actors;

	//A direction arrow shown on the supplementary sign. 
	UPROPERTY(EditAnywhere, Category="DECL")
	TArray<USupplementarySignArrow*> Arrows;

	//Boolean flag to indicate that the supplementary traffic sign is taken out of service. This can be achieved by visibly crossing the sign or covering it completely.
	UPROPERTY(EditAnywhere, Category="DECL")
	bool bIsOutOfService;

	//Country specification of the traffic sign catalog specification that identifies the actual traffic sign. This is part of the 4-tupel traffic sign catalog specification as used in OpenDRIVE. Country is specified using the ISO 3166-1, alpha-2 code https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2, or the special OpenDRIVE country for generic signs.
	UPROPERTY(EditAnywhere, Category="DECL")
	FString Country;

	//Revision specification of the traffic sign catalog specification that identifies the actual traffic sign. This is part of the 4-tupel traffic sign catalog specification as used in OpenDRIVE. The year the traffic rules came into force. e.g. \"2017\"
	UPROPERTY(EditAnywhere, Category="DECL")
	FString CountryRevision;

	//Code specification of the traffic sign catalog specification that identifies the actual traffic sign. This is part of the 4-tupel traffic sign catalog specification as used in OpenDRIVE. Code identifier according to country and country revision, corresponds to the type field of OpenDRIVE. code is only unique in combination with country and country_revision. e.g. http://www.vzkat.de/2017/VzKat.htm
	UPROPERTY(EditAnywhere, Category="DECL")
	FString Code;

	//Sub-code specification of the traffic sign catalog specification that identifies the actual traffic sign. This is part of the 4-tupel traffic sign catalog specification as used in OpenDRIVE. Sub-code identifier according to country, country revision and code, corresponds to the subtype field of OpenDRIVE. sub_code is only unique in combination with country, country_revision, and code. e.g. http://www.vzkat.de/2017/VzKat.htm
	UPROPERTY(EditAnywhere, Category="DECL")
	FString SubCode;

	//Assignment of this object to logical lanes.
	//TODO: LogicalLaneAssignments

	

	
	
};
