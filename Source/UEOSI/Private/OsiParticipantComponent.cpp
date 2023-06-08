// Copyright 2023 Adrian Pfaff


#include "OsiParticipantComponent.h"
#include "OsiThread/OsiWorldSubsystem.h"
#include "Declarations/ObjectDeclaration.h"

UOsiParticipantComponent::UOsiParticipantComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UOsiParticipantComponent::BeginPlay()
{
	Super::BeginPlay();

	auto OsiSubsystem=GetWorld()->GetSubsystem<UOsiWorldSubsystem>();

	//acquire initial resources from thread
	for (auto Decl : ParticipantDeclarations)
	{
		Decl->InternalInit(GetWorld(), OsiSubsystem);
		Decl->Initialize();
	}

	//dispatch initial data
	for(auto Decl : ParticipantDeclarations)
	{
		Decl->InitialDispatch();
	}
}

void UOsiParticipantComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//dispatch changes only
	for(auto Decl : ParticipantDeclarations)
	{
		Decl->Update();
	}
}

