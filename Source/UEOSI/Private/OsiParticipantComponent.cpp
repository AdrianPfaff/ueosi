// Copyright 2023 Adrian Pfaff


#include "OsiParticipantComponent.h"

#include "Declarations/MovingObject.h"
#include "OsiThread/OsiWorldSubsystem.h"
#include "Declarations/ObjectDeclaration.h"
#include "Declarations/StationaryObject.h"
#include "Declarations/TrafficLight.h"
#include "Declarations/TrafficSign.h"
#include "Declarations/Occupant.h"

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

TArray<UTrafficSign*> UOsiParticipantComponent::GetTrafficSigns()
{
	TArray<UTrafficSign*> TrafficSigns;
	
	for (auto Decl : ParticipantDeclarations)
	{
		if (auto TrafficSign=Cast<UTrafficSign>(Decl))
		{
			TrafficSigns.Add(TrafficSign);
		}
	}
	return TrafficSigns;
}

TArray<UTrafficLight*> UOsiParticipantComponent::GetTrafficLights()
{
	TArray<UTrafficLight*> TrafficLights;
	for (auto Decl : ParticipantDeclarations)
	{
		if (auto TrafficLight=Cast<UTrafficLight>(Decl))
		{
			TrafficLights.Add(TrafficLight);
		}
	}
	return TrafficLights;
}

TArray<UStationaryObject*> UOsiParticipantComponent::GetStationaryObjects()
{
	TArray<UStationaryObject*> StationaryObjects;
	for (auto Decl : ParticipantDeclarations)
	{
		if (auto StationaryObject=Cast<UStationaryObject>(Decl))
		{
			StationaryObjects.Add(StationaryObject);
		}
	}
	return StationaryObjects;
}

TArray<UOccupant*> UOsiParticipantComponent::GetOccupants()
{
	TArray<UOccupant*> Occupants;
	for (auto Decl : ParticipantDeclarations)
	{
		if (auto Occupant=Cast<UOccupant>(Decl))
		{
			Occupants.Add(Occupant);
		}
	}
	return Occupants;
}

TArray<UMovingObject*> UOsiParticipantComponent::GetMovingObjects()
{
	TArray<UMovingObject*> MovingObjects;
	for (auto Decl : MovingObjects)
	{
		if (auto MovingObject = Cast<UMovingObject>(Decl))
		{
			MovingObjects.Add(MovingObject);
		}
	}
	return MovingObjects;
}

