// Copyright 2023 Adrian Pfaff


#include "Declarations/MainTrafficSignClassification.h"

#include "osi_trafficsign.pb.h"
#include "Actions/PawnAction.h"
#include "Declarations/TrafficSignValue.h"

void UMainTrafficSignClassification::Initialize(osi3::TrafficSign_MainSign_Classification* ClassificationResource)
{
	InternalClassification=ClassificationResource;

	if(ValueDeclaration)
	{
		ValueDeclaration->InternalInit(GetWorld(), OsiSubsystem);
		ValueDeclaration->Initialize(InternalClassification->mutable_value());
	}
	
}

void UMainTrafficSignClassification::InitialDispatch()
{
	DispatchCommand([OsiClassification=InternalClassification, Variability=Variability, Type=Type, DirectionScope=DirectionScope, bVerticallyMirrored=bVerticallyMirrored, bIsOutOfService=bIsOutOfService, Country=Country, CountryRevision=CountryRevision, Code=Code, SubCode=SubCode]() mutable 
	{
		OsiClassification->set_variability(static_cast<osi3::TrafficSign_Variability>(Variability));
		OsiClassification->set_type(static_cast<osi3::TrafficSign_MainSign_Classification_Type>(Type));
		OsiClassification->set_direction_scope(static_cast<osi3::TrafficSign_MainSign_Classification_DirectionScope>(DirectionScope));
		OsiClassification->set_vertically_mirrored(bVerticallyMirrored);
		OsiClassification->set_is_out_of_service(bIsOutOfService);
		OsiClassification->set_country(TCHAR_TO_UTF8(*Country));
		OsiClassification->set_country_revision(TCHAR_TO_UTF8(*CountryRevision));
		OsiClassification->set_code(TCHAR_TO_UTF8(*Code));
		OsiClassification->set_sub_code(TCHAR_TO_UTF8(*SubCode));
	});

	if(ValueDeclaration)
	{
		ValueDeclaration->InitialDispatch();
	}

	
}

void UMainTrafficSignClassification::Update()
{
	//TODO: Sign classification currently does not support changes
	
	if(ValueDeclaration)
	{
		ValueDeclaration->Update();
	}
}
