// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OsiTrigger.generated.h"

class UOsiParticipantComponent;
/**
 * 
 */
UCLASS(Blueprintable)
class UEOSI_API UOsiTrigger : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent)
	void Setup(UOsiParticipantComponent* Component);
	UFUNCTION(BlueprintNativeEvent)
	void WatchValue();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnTriggered();
protected:

	UFUNCTION(BlueprintPure)
	UOsiParticipantComponent* GetParticipantComponent() const
	{
		if (!ParticipantComponent)
		{
			UE_LOG(LogTemp, Error, TEXT("Override Setup function but keep super call!"))
		}
		return ParticipantComponent;
	}

	UPROPERTY(BlueprintReadOnly, BlueprintGetter=GetParticipantComponent)
	UOsiParticipantComponent* ParticipantComponent;
	
};
