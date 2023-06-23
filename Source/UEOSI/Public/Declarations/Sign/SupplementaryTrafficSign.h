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

	//The base parameters of the supplementary traffic sign. The orientation of the bounding box SupplementarySign::base ( BaseStationary::orientation ) is defined as follows: The z-axis of the given BaseStationary::orientation is the vector from the bottom to the top of the supplementary traffic sign's 2D image plate. (Normally it is equal to the ground truth z-axis.) The x-axis of the given BaseStationary::orientation is view normal of the supplementary traffic sign's image. This x-axis points from the supplementary traffic sign's image in the direction from where a 'viewer' could see the supplementary traffic sign image.
	UPROPERTY(EditAnywhere, Category="DECL"	)
	UBaseStationary* BaseStationary;

	//The classification of the supplementary traffic sign. 
	UPROPERTY(EditAnywhere, Category="DECL"	)
	USupplementarySignClassification* SupplementaryClassification;

	//Opaque reference of an associated 3D model of the supplementary traffic sign. Note It is implementation-specific how model_references are resolved to 3d models. 
	//TODO: Supp Sign ModelReference
	
};
