// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "SignEnumWrappers.h"

#include "SignStructWrappers.generated.h"

USTRUCT(BlueprintType)
struct FBaseStationary
{
	GENERATED_BODY()

	//The 3D dimensions of the stationary object (bounding box), e.g. a landmark.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FBox BoundingBox;

	//The reference point for position and orientation, i.e.the center (x,y,z) of the bounding box.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector Position;

	//The relative orientation of the stationary object w.r.t.its parent frame, noted in the parent frame. The orientation becomes global/absolute if the parent frame is inertial (all parent frames up to ground truth). Originbase stationary entity:=Rotationyaw,pitch,roll( orientation )∗(Originparent coord system− position )Note There may be some constraints how to align the orientation w.r.t. to some stationary object's or entity's definition. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FRotator Orientation;

	//Usage as ground truth: The two dimensional (flat) contour of the object. This is an extension of the concept of a bounding box as defined by Dimension3d. The contour is the projection of the object's outline onto the z-plane in the object frame (independent of its current position and orientation). The height is the same as the height of the bounding box. Usage as sensor data: The polygon describes the visible part of the object's contour. General definitions: The polygon is defined in the local object frame: x pointing forward and y to the left. The origin is the center of the bounding box. As ground truth, the polygon is closed by connecting the last with the first point. Therefore these two points must be different. The polygon must consist of at least three points. As sensor data, however, the polygon is open. The polygon is defined counter-clockwise.
	//TArray<FVector2d> BasePolygons;
	
};

USTRUCT(BlueprintType)
struct FTrafficSignValue {
	GENERATED_BODY()

	//Additional value associated with a traffic sign or road marking, e.g. value of a speed limit.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	double Value;

	//Unit for additional value. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ETrafficSignUnit Unit;

	//Text associated with a sign, e.g. the name of a location whose distance to the sign is indicated therein. The interpretation of this text is left to a user-defined procedure.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString Text;
};

USTRUCT(BlueprintType)
struct FMainTrafficSignClassification
{
	GENERATED_BODY()

	//This value indicates if a sign is static or dynamic regarding its content (e.g., electronic sign bridge) and/or regarding its position on the road.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ETrafficSignVariability Variability;

	//The type of the traffic sign.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EMainSignType Type;

	//Additional value associated with the traffic sign, e.g. value of the speed limit.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FTrafficSignValue Value;

	//Some traffic signs have an additional arrow symbol as an additional constraint for their scope (e.g. no parking to the right). The arrow direction is given relative to the sign's 2D image plane, i.e. as a viewer standing right in front of the sign and looking straight towards it would interpret the arrow The definition for left and right is according to the following temporarily constructed right-handed local coordinate system: Set z-axis to match the z-axis of the ground truth coordinate system. Set x-axis to the view normal of the traffic sign's image (base BaseStationary::orientation x-axis). Right: direction of the local coordinate system's positive y-axis. Left: opposite direction of the local coordinate system's y-axis i.e. negative y-axis', Note If a traffic sign image is on the ground (there is no definition for right or left). Normally, this is a road marking and not a traffic sign. Actual traffic signs lying on the ground might have been intentionally unmounted and, hence, not be in effect.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ESignDirectionScope DirectionScope;

	//The IDs of the lanes that the sign is assigned to. May be multiple if the sign is valid for multiple lanes.
	// TArray<FIdentifier> AssignedLaneIDs;

	//Some traffic signs exist in two variants that have a similar semantic meaning but differ in that the symbol of the one corresponds to the specular reflection of the other with respect to the vertical axis. For some scenarios it might be relevant to choose the reflected version of a reference sign. This can be done by setting the vertically_mirrored boolean to true. As for every boolean in the protocol buffers language, the default value of vertically_mirrored is false.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool VerticallyMirrored;

	//Boolean flag to indicate that a traffic sign is taken out of service. This can be achieved by visibly crossing the sign or covering it completely.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bIsOutOfService;

	//Country specification of the traffic sign catalog specification that identifies the actual traffic sign. This is part of the 4-tupel traffic sign catalog specification as used in OpenDRIVE. Country is specified using the ISO 3166-1, alpha-2 code https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2, or the special OpenDRIVE country for generic signs.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString Country;

	//Revision specification of the traffic sign catalog specification that identifies the actual traffic sign. This is part of the 4-tupel traffic sign catalog specification as used in OpenDRIVE. The year the traffic rules came into force. e.g. "2017"
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString CountryRevision;

	//Code specification of the traffic sign catalog specification that identifies the actual traffic sign. This is part of the 4-tupel traffic sign catalog specification as used in OpenDRIVE. Code identifier according to country and country revision, corresponds to the type field of OpenDRIVE. code is only unique in combination with country and country_revision. e.g. http://www.vzkat.de/2017/VzKat.htm
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString Code;

	//Sub-code specification of the traffic sign catalog specification that identifies the actual traffic sign. This is part of the 4-tupel traffic sign catalog specification as used in OpenDRIVE. Sub-code identifier according to country, country revision and code, corresponds to the subtype field of OpenDRIVE. sub_code is only unique in combination with country, country_revision, and code. e.g. http://www.vzkat.de/2017/VzKat.htm
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString SubCode;

	//Assignment of this object to logical lanes. 
	//TArray<FLogicalLaneAssignment> LogicalLaneAssignments;
};

USTRUCT(BlueprintType)
struct FSupplementaryTrafficSignClassification
{
	GENERATED_BODY()

	//Variability. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ETrafficSignVariability Variability;

	//Type of the supplementary sign. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ESupplementarySignType Type;

	//Additional value(s) associated with the traffic sign, e.g. length, mass or starting time in time range.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FTrafficSignValue Value;

	//The IDs of the lanes that the sign is assigned to. May be multiple if the sign is valid for multiple lanes.
	//TArray<FIdentifier> AssignedLaneIDs;

	//Definition of the traffic actors the supplementary sign makes reference to. E.g. bikes, trucks, cars, etc.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<ESignActor> Actors;

	//A direction arrow shown on the supplementary sign. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<EArrowDirection> Arrows;

	//Boolean flag to indicate that the supplementary traffic sign is taken out of service. This can be achieved by visibly crossing the sign or covering it completely.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bIsOutOfService;

	//Country specification of the traffic sign catalog specification that identifies the actual traffic sign. This is part of the 4-tupel traffic sign catalog specification as used in OpenDRIVE. Country is specified using the ISO 3166-1, alpha-2 code https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2, or the special OpenDRIVE country for generic signs.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString CountryCode;

	//Revision specification of the traffic sign catalog specification that identifies the actual traffic sign. This is part of the 4-tupel traffic sign catalog specification as used in OpenDRIVE. The year the traffic rules came into force. e.g. "2017"
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString CountryRevision;

	//Code specification of the traffic sign catalog specification that identifies the actual traffic sign. This is part of the 4-tupel traffic sign catalog specification as used in OpenDRIVE. Code identifier according to country and country revision, corresponds to the type field of OpenDRIVE. code is only unique in combination with country and country_revision. e.g. http://www.vzkat.de/2017/VzKat.htm
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString Code;

	//Sub-code specification of the traffic sign catalog specification that identifies the actual traffic sign. This is part of the 4-tupel traffic sign catalog specification as used in OpenDRIVE. Sub-code identifier according to country, country revision and code, corresponds to the subtype field of OpenDRIVE. sub_code is only unique in combination with country, country_revision, and code. e.g. http://www.vzkat.de/2017/VzKat.htm
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString SubCode;

	//Assignment of this object to logical lanes.
	//TArray<FLogicalLaneAssignment> LogicalLaneAssignments;
};

USTRUCT(BlueprintType)
struct FMainTrafficSignData
{
	GENERATED_BODY()

	//The base parameters of the traffic sign. The orientation of the bounding box base ( BaseStationary::orientation ) is defined as follows: The z-axis of the given BaseStationary::orientation is the vector from the bottom to the top of the traffic sign's 2D image plate. (Normally it is equal to the ground truth z-axis.) The x-axis of the given BaseStationary::orientation is view normal of the traffic sign's image. This x-axis points from the traffic sign's image in the direction from where a 'viewer' could see the traffic sign image.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FBaseStationary Base;

	//The classification of the traffic sign. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FMainTrafficSignClassification Classification;

	//Opaque reference of an associated 3D model of the traffic sign. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString ModelReference;
};

USTRUCT(BlueprintType)
struct FSupplementaryTrafficSignData
{
	GENERATED_BODY()

	//The base parameters of the traffic sign. The orientation of the bounding box base ( BaseStationary::orientation ) is defined as follows: The z-axis of the given BaseStationary::orientation is the vector from the bottom to the top of the traffic sign's 2D image plate. (Normally it is equal to the ground truth z-axis.) The x-axis of the given BaseStationary::orientation is view normal of the traffic sign's image. This x-axis points from the traffic sign's image in the direction from where a 'viewer' could see the traffic sign image.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FBaseStationary Base;

	//The classification of the traffic sign. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSupplementaryTrafficSignClassification Classification;

	//Opaque reference of an associated 3D model of the traffic sign. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString ModelReference;
};