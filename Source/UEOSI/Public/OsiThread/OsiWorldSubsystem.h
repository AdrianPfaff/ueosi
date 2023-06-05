// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "OsiWorldSubsystem.generated.h"

struct FOsiThreadContext;
class FOsiRunnable;

using FOsiQueue=TQueue<TFunction<void()>>;
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

	inline void EnqueueCommand(const TFunction<void()>& Command) const { OsiQueue->Enqueue(Command); }


private:

	TSharedPtr<FOsiRunnable> OsiThread;

	
	TSharedPtr<FOsiQueue> OsiQueue;
};
