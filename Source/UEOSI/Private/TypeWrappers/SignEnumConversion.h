// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "osi_trafficsign.pb.h"
#include "..\..\Public\TypeWrappers\SignEnumWrappers.h"

//forward declarations

namespace osi3
{
	enum TrafficSign_Variability : int;
}

inline osi3::TrafficSign_Variability operator=(ETrafficSignVariability Var) noexcept
{
		return static_cast<osi3::TrafficSign_Variability>(Var);
}

inline osi3::TrafficSign_MainSign_Classification_DirectionScope operator=(ESignDirectionScope Var) noexcept
{
		return static_cast<osi3::TrafficSign_MainSign_Classification_DirectionScope>(Var);
}

inline osi3::TrafficSignValue_Unit operator=(ETrafficSignUnit Var) noexcept
{
	return static_cast<osi3::TrafficSignValue_Unit>(Var);
}

inline osi3::TrafficSign_MainSign_Classification_Type operator=(EMainSignType Var) noexcept
{
	return static_cast<osi3::TrafficSign_MainSign_Classification_Type>(Var);
}

inline osi3::TrafficSign_SupplementarySign_Classification_Type operator=(ESupplementarySignType Var) noexcept
{
	return static_cast<osi3::TrafficSign_SupplementarySign_Classification_Type>(Var);
}

inline osi3::TrafficSign_SupplementarySign_Classification_Actor operator=(ESignActor Var) noexcept
{
	return static_cast<osi3::TrafficSign_SupplementarySign_Classification_Actor>(Var);
}

inline osi3::TrafficSign_SupplementarySign_Classification_Arrow_Direction operator=(EArrowDirection Var) noexcept
{
	return static_cast<osi3::TrafficSign_SupplementarySign_Classification_Arrow_Direction>(Var);
}