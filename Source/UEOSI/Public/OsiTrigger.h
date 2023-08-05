// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OsiTrigger.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UEOSI_API UOsiTrigger : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent)
	void WatchValue();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnTriggered();
protected:

	
};
