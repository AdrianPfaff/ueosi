// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OsiParticipantComponent.generated.h"


class UOsiTrigger;
class UTrafficLight;
class UObjectDeclaration;
class UTrafficSign;
class UStationaryObject;
class UOccupant;
class UMovingObject;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UEOSI_API UOsiParticipantComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UOsiParticipantComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	TArray<UTrafficSign*> GetTrafficSigns();

	UFUNCTION(BlueprintCallable)
	TArray<UTrafficLight*> GetTrafficLights();

	UFUNCTION(BlueprintCallable)
	TArray<UStationaryObject*> GetStationaryObjects();

	UFUNCTION(BlueprintCallable)
	TArray<UOccupant*> GetOccupants();

	UFUNCTION(BlueprintCallable)
	TArray<UMovingObject*> GetMovingObjects();

protected:
	
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Instanced)
	TArray<UObjectDeclaration*> ParticipantDeclarations;

	UPROPERTY(EditAnywhere, Instanced)
	TArray<UOsiTrigger*> Triggers;
		
};
