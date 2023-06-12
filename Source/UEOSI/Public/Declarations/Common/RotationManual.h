// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declarations/Common/RotationDeclaration.h"
#include "RotationManual.generated.h"

/**
 * 
 */
UCLASS(DisplayName="Manual Rotation")
class UEOSI_API URotationManual : public URotationDeclaration
{
	GENERATED_BODY()

public:
	
	virtual void InitialDispatch() override;

	virtual void Update() override;


	void SetPosition(const FRotator& NewRot) { Rotation=NewRot; bRotationHasChanged=true; }

protected:

	UPROPERTY(EditAnywhere, Category="DECL")
	FRotator Rotation;

	bool bRotationHasChanged=false;

	void DispatchRotation();
	
};
