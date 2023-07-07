// Copyright 2023 Adrian Pfaff


#include "Declarations/StationaryObject/StationaryObjectClassification.h"

#include "osi_object.pb.h"

void UStationaryObjectClassification::Initialize(osi3::StationaryObject_Classification* ClassificationResource)
{
	InternalClassification=ClassificationResource;
}

void UStationaryObjectClassification::InitialDispatch()
{
	DispatchCommand([OsiClassification=InternalClassification, Type=Type, Material=Material, Density=Density, AssignedLaneIDs=AssignedLaneIDs]()
	{
		OsiClassification->set_type(static_cast<osi3::StationaryObject_Classification_Type>(Type));
		OsiClassification->set_material(static_cast<osi3::StationaryObject_Classification_Material>(Material));
		OsiClassification->set_density(static_cast<osi3::StationaryObject_Classification_Density>(Density));
		for (auto LaneID : AssignedLaneIDs)
		{
			OsiClassification->add_assigned_lane_id()->set_value(LaneID);
		}
		
	});
}

void UStationaryObjectClassification::Update()
{
	//TODO: Updating currently not supported
}
