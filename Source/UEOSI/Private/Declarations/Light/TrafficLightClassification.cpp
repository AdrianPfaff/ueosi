// Copyright 2023 Adrian Pfaff


#include "Declarations/Light/TrafficLightClassification.h"

#include "osi_trafficlight.pb.h"

void UTrafficLightClassification::Initialize(osi3::TrafficLight_Classification* ClassificationResource)
{
	InternalClassification=ClassificationResource;
}

void UTrafficLightClassification::InitialDispatch()
{
	DispatchCommand([OsiClassification=InternalClassification, Color=Color, Icon=Icon, Mode=Mode, Counter=Counter, bIsOutOfService=bIsOutOfService]()
	{
		OsiClassification->set_color(static_cast<osi3::TrafficLight_Classification_Color>(Color));
		OsiClassification->set_icon(static_cast<osi3::TrafficLight_Classification_Icon>(Icon));
		OsiClassification->set_mode(static_cast<osi3::TrafficLight_Classification_Mode>(Mode));
		if (Counter>=0)
		{
			OsiClassification->set_counter(Counter);
		}
		OsiClassification->set_is_out_of_service(bIsOutOfService);
	});
}

void UTrafficLightClassification::Update()
{
	//TODO: Doesnt support updating
}
