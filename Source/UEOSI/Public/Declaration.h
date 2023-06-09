// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.generated.h"

class UOsiParticipantComponent;
class UOsiWorldSubsystem;
/**
 * 
 */
UCLASS(EditInlineNew, BlueprintType, Abstract, DefaultToInstanced)
class UEOSI_API UDeclaration : public UObject
{
	GENERATED_BODY()

public:

	void InternalInit(UWorld* InWorld, UOsiWorldSubsystem* InSubsystem);

	//first dispatch filling in initial messages 
	virtual void InitialDispatch() {}

	//update only changes
	virtual void Update() {}


	virtual UWorld* GetWorld() const override;

protected:

	void DispatchCommand(TFunction<void()> Command);

	UPROPERTY()
	UOsiWorldSubsystem* OsiSubsystem;
private:

	UPROPERTY()
	UWorld* World;

	
};
