// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "google/protobuf/arena.h"
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

	inline void EnqueueCommand(TFunction<void()>& Command) { OsiThread->EnqueueCommand(Command); }

	template<class T>
	T* AllocateMessage()
	{
		return google::protobuf::Arena::CreateMessage<T>(Arena);
	}

private:

	TSharedPtr<FOsiRunnable> OsiThread;
	
	FOsiQueue CommandQueue;

	//allocator for messages
	google::protobuf::Arena Arena;

	friend class FOsiRunnable;

};