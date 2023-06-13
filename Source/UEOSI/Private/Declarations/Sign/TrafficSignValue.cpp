// Copyright 2023 Adrian Pfaff


#include "Declarations/Sign/TrafficSignValue.h"

#include "osi_trafficsign.pb.h"

void UTrafficSignValue::Initialize(osi3::TrafficSignValue* ValueResource)
{
	InternalValue=ValueResource;
}

void UTrafficSignValue::InitialDispatch()
{
	DispatchCommand([OsiValue=InternalValue, Value=Value, ValueUnit=ValueUnit, Text=Text]() mutable
	{
		OsiValue->set_value(Value);
		OsiValue->set_value_unit(static_cast<osi3::TrafficSignValue_Unit>(ValueUnit));
		OsiValue->set_text(TCHAR_TO_UTF8(*Text.ToString()));
	});
}

void UTrafficSignValue::Update()
{
	//TODO: Currently sign values are static and cannot change
}
