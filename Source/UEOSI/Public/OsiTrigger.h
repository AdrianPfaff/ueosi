// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OsiTrigger.generated.h"

class UOsiParticipantComponent;
/**
 * 
 */
UCLASS(Blueprintable, EditInlineNew, DefaultToInstanced, BlueprintType)
class UEOSI_API UOsiTrigger : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent)
	void Setup(UOsiParticipantComponent* Component, UWorld* World);
	UFUNCTION(BlueprintNativeEvent)
	void Observe();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Trigger();
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

	UPROPERTY()
	UWorld* WorldHandle;

	virtual UWorld* GetWorld() const override
	{
		if (!WorldHandle)
		{
			UE_LOG(LogTemp, Error, TEXT("Override Setup function but keep super call!"))
		}
		return WorldHandle;
	}
};
