// Copyright 2023 Adrian Pfaff


#include "Declarations/TrafficLight.h"

#include "OsiIDProvider.h"
#include "osi_groundtruth.pb.h"
#include "Declarations/Light/TrafficLightClassification.h"
#include "OsiThread/OsiWorldSubsystem.h"

void UTrafficLight::Initialize()
{
	auto GroundTruth=OsiSubsystem->GetGlobalGroundTruth();

	Identifier=FOsiIDProvider::DefaultProvider().RequestID();
	InternalLight=GroundTruth->add_traffic_light();

	Classification->PreInit(GetWorld(), OsiSubsystem);
	Classification->Initialize(InternalLight->mutable_classification());
}

void UTrafficLight::InitialDispatch()
{
	DispatchCommand([OsiLight=InternalLight, Identifier=Identifier, Color=ColorDescription]()
	{
		OsiLight->mutable_id()->set_value(Identifier);
		//TODO: are these colors correct? osi makes no mention of format, encoding, srgb gamma etc.
		OsiLight->mutable_color_description()->mutable_rgb()->set_red(Color.R);
		OsiLight->mutable_color_description()->mutable_rgb()->set_green(Color.G);
		OsiLight->mutable_color_description()->mutable_rgb()->set_blue(Color.B);
	});

	Classification->InitialDispatch();
}

void UTrafficLight::Update()
{
	//TODO: Does not support updating fields

	Classification->Update();
}
