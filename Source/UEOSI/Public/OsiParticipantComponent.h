// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OsiParticipantComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UEOSI_API UOsiParticipantComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UOsiParticipantComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	
	virtual void BeginPlay() override;
		
};
