// Copyright 2023 Adrian Pfaff


#include "Declarations/SupplementarySignClassification.h"

#include "osi_trafficsign.pb.h"
#include "Declarations/SupplementarySignArrow.h"
#include "Declarations/TrafficSignValue.h"

void USupplementarySignClassification::Initialize(
	osi3::TrafficSign_SupplementarySign_Classification* ClassificationResource)
{
	InternalClassification=ClassificationResource;

	for(auto Value : Values)
	{
		Value->InternalInit(GetWorld(), OsiSubsystem);
		Value->Initialize(InternalClassification->add_value());
	}

	for(auto Arrow : Arrows)
	{
		Arrow->InternalInit(GetWorld(), OsiSubsystem);
		Arrow->Initialize(InternalClassification->add_arrow());
	}
}

void USupplementarySignClassification::InitialDispatch()
{
	DispatchCommand([OsiClassification=InternalClassification, Variability=Variability, Type=Type, Actors=Actors, bIsOutOfService=bIsOutOfService, Country=Country, CountryRevision=CountryRevision, Code=Code, SubCode=SubCode]() mutable
	{
		OsiClassification->set_variability(static_cast<osi3::TrafficSign_Variability>(Variability));
		OsiClassification->set_type(static_cast<osi3::TrafficSign_SupplementarySign_Classification_Type>(Type));
		for(auto& Actor : Actors)
		{
			OsiClassification->add_actor(static_cast<osi3::TrafficSign_SupplementarySign_Classification_Actor>(Actor));
		}
		OsiClassification->set_is_out_of_service(bIsOutOfService);
		OsiClassification->set_country(TCHAR_TO_UTF8(*Country));
		OsiClassification->set_country_revision(TCHAR_TO_UTF8(*CountryRevision));
		OsiClassification->set_code(TCHAR_TO_UTF8(*Code));
		OsiClassification->set_sub_code(TCHAR_TO_UTF8(*SubCode));
	});

	for(auto Value : Values)
	{
		Value->InitialDispatch();
	}

	for(auto Arrow : Arrows)
	{
		Arrow->InitialDispatch();
	}
}

void USupplementarySignClassification::Update()
{
	//TODO: Currently does not support changing values

	for(auto Value : Values)
	{
		Value->Update();
	}

	for(auto Arrow : Arrows)
	{
		Arrow->Update();
	}
}
