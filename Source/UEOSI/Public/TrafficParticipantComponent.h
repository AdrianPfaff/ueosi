// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TrafficParticipantComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UEOSI_API UTrafficParticipantComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UTrafficParticipantComponent();

protected:
	
	virtual void BeginPlay() override;

public:	
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
