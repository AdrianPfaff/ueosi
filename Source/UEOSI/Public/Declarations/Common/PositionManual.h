// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declarations/Common/PositionDeclaration.h"
#include "PositionManual.generated.h"

/**
 * 
 */
UCLASS(DisplayName="Manual Position")
class UEOSI_API UPositionManual : public UPositionDeclaration
{
	GENERATED_BODY()

public:

	virtual void InitialDispatch() override;

	virtual void Update() override;


	void SetPosition(const FVector& NewPos) { Position=NewPos; bPositionHasChanged=true; }

protected:

	//manually specified position
	UPROPERTY(EditAnywhere)
	FVector Position;

	bool bPositionHasChanged=false;
	
};
