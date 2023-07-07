// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EStationaryObjectType : uint8
{
	TYPE_UNKNOWN = 0					UMETA(Hidden, DisplayName="Unknown", Tooltip="Type of the object is unknown (must not be used in ground truth)."),
  	TYPE_OTHER = 1						UMETA(DisplayName="Other", Tooltip="Other (unspecified but known) type of object."),
  	TYPE_BRIDGE = 2						UMETA(DisplayName="Bridge", Tooltip="Object is a bridge."),
  	TYPE_BUILDING = 3					UMETA(DisplayName="Building", Tooltip="Object is a building."),
  	TYPE_POLE = 4						UMETA(DisplayName="Pole", Tooltip=""),
  	TYPE_PYLON = 5						UMETA(DisplayName="Pylon", Tooltip=""),
	TYPE_DELINEATOR = 6					UMETA(DisplayName="Delineator", Tooltip="Object is a delineator (e.g. at a construction site)."),
  	TYPE_TREE = 7						UMETA(DisplayName="Tree", Tooltip="Object is a tree."),
  	TYPE_BARRIER = 8					UMETA(DisplayName="Barrier", Tooltip="Object is a barrier."),
  	TYPE_VEGETATION = 9					UMETA(DisplayName="Vegetation", Tooltip="Object is vegetation."),
  	TYPE_CURBSTONE = 10					UMETA(DisplayName="Curbstone", Tooltip="Object is a curbstone."),
  	TYPE_WALL = 11						UMETA(DisplayName="Wall", Tooltip="Object is a wall."),
  	TYPE_VERTICAL_STRUCTURE = 12		UMETA(DisplayName="Vertical Structure", Tooltip="Landmarks corresponding to vertical structures in the environment."),
  	TYPE_RECTANGULAR_STRUCTURE = 13		UMETA(DisplayName="Rectangular Structure", Tooltip="Landmarks corresponding to rectangular structures in the environment, like walls."),
  	TYPE_OVERHEAD_STRUCTURE = 14		UMETA(DisplayName="Overhead Structure", Tooltip="Landmarks corresponding to overhead structures in the environment, like sign bridges."),
  	TYPE_REFLECTIVE_STRUCTURE = 15		UMETA(DisplayName="Reflective Structure", Tooltip="Landmarks corresponding to reflective structures in the environment, like reflective poles on the road boarder."),
  	TYPE_CONSTRUCTION_SITE_ELEMENT = 16	UMETA(DisplayName="Construction Site Element", Tooltip="Landmarks corresponding to construction site elements in the environment, like beacons."),
  	TYPE_SPEED_BUMP = 17				UMETA(DisplayName="Speed Bump", Tooltip="Object is a speed bump."),
  	TYPE_EMITTING_STRUCTURE = 18		UMETA(DisplayName="Emitting Structure", Tooltip="Landmarks corresponding to sources of electromagnetic waves in the environment, like street lights.")
};

UENUM(BlueprintType)
enum class EStationaryObjectMaterial : uint8
{
	MATERIAL_UNKNOWN = 0	UMETA(Hidden, DisplayName="Unknown", Tooltip="Type of the material is unknown (must not be used in ground truth)."),
	MATERIAL_OTHER = 1		UMETA(DisplayName="Other", Tooltip="Other (unspecified but known) type of material."),
	MATERIAL_WOOD = 2		UMETA(DisplayName="Wood", Tooltip="Wooden structure."),
	MATERIAL_PLASTIC = 3	UMETA(DisplayName="Plastic", Tooltip="Plastic structure."),
	MATERIAL_CONCRETE = 4	UMETA(DisplayName="Concrete", Tooltip="Concrete structure."),
	MATERIAL_METAL = 5		UMETA(DisplayName="Metal", Tooltip="Metal structure."),
	MATERIAL_STONE = 6		UMETA(DisplayName="Stone", Tooltip="Natural stone structure."),
	MATERIAL_GLAS = 7		UMETA(DisplayName="Glas", Tooltip="Glas structure."),
	MATERIAL_MUD = 8		UMETA(DisplayName="Mud", Tooltip="Mud structure.")
};

UENUM(BlueprintType)
enum class EStationaryObjectDensity : uint8
{
	DENSITY_UNKNOWN = 0		UMETA(Hidden, DisplayName="Unknown", Tooltip="Type of the material density is unknown (must not be used in ground truth)."),
  	DENSITY_OTHER = 1		UMETA(DisplayName="Other", Tooltip="Other (unspecified but known) type of material density."),
  	DENSITY_SOLID = 2		UMETA(DisplayName="Solid", Tooltip="No perforation - solid;."),
	DENSITY_SMALL_MESH = 3	UMETA(DisplayName="Small Mesh", Tooltip="Perforation max. ]0; 100] mm"),
	DENSITY_MEDIAN_MESH = 4	UMETA(DisplayName="Median Mesh", Tooltip="Perforation max. ]100; 500] mm"),
	DENSITY_LARGE_MESH = 5	UMETA(DisplayName="Large Mesh", Tooltip="Perforation max. ]500; 5000] mm"),
	DENSITY_OPEN = 6		UMETA(DisplayName="Open", Tooltip="Perforation max. ]5000; infinity[ mm")
};