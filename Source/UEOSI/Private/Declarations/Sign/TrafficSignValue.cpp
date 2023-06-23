// Copyright 2023 Adrian Pfaff


#include "Declarations/Sign/TrafficSignValue.h"

#include "osi_trafficsign.pb.h"

void UTrafficSignValue::Initialize(osi3::TrafficSignValue* ValueResource)
{
	InternalValue=ValueResource;
}

void UTrafficSignValue::InitialDispatch()
{
	DispatchAll();
}

void UTrafficSignValue::Update()
{
	if (bIsDirty)
	{
		DispatchAll();
		bIsDirty=false;
	}
}

void UTrafficSignValue::ChangeValue(double NewValue)
{
	if (Value!=NewValue)
	{
		MarkDirty();
		Value=NewValue;
	}
}

void UTrafficSignValue::ChangeSignUnit(ETrafficSignUnit NewUnit)
{
	if (ValueUnit!=NewUnit)
	{
		MarkDirty();
		ValueUnit=NewUnit;
	}
}

void UTrafficSignValue::ChangeText(const FText& NewText)
{
	MarkDirty();
	Text=NewText;
}

void UTrafficSignValue::DispatchAll()
{
	DispatchCommand([OsiValue=InternalValue, Value=Value, ValueUnit=ValueUnit, Text=Text]() mutable
	{
		OsiValue->set_value(Value);
		OsiValue->set_value_unit(static_cast<osi3::TrafficSignValue_Unit>(ValueUnit));
		OsiValue->set_text(TCHAR_TO_UTF8(*Text.ToString()));
	});
}
