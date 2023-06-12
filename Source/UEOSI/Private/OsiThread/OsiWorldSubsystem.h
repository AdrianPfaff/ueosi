// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "OsiThread/OsiThread.h"
#include "Subsystems/WorldSubsystem.h"
#include "OsiWorldSubsystem.generated.h"



struct FOsiThreadContext;
class FOsiRunnable;
/**
 * 
 */
UCLASS()
class UEOSI_API UOsiWorldSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:

	//only create when playing
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	virtual void Deinitialize() override;

	inline void EnqueueCommand(TFunction<void()>& Command) const { OsiThread->EnqueueCommand(Command); }

	osi3::GroundTruth* GetGlobalGroundTruth() const { return OsiThread->GetGlobalGroundTruth(); }

	UFUNCTION(BlueprintCallable)
	void SaveOsiTrace(float TimeSeconds);

private:

	TSharedPtr<FOsiRunnable> OsiThread;

};