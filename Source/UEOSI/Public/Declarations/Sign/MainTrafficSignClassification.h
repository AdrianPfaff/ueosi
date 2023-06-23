// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.h"
#include "TypeWrappers/SignEnumWrappers.h"
#include "MainTrafficSignClassification.generated.h"

class UTrafficSignValue;

namespace osi3
{
	class TrafficSign_MainSign_Classification;
}

/**
 * 
 */
UCLASS()
class UEOSI_API UMainTrafficSignClassification : public UDeclaration
{
	GENERATED_BODY()


public:

	void Initialize(osi3::TrafficSign_MainSign_Classification* ClassificationResource);

	virtual void InitialDispatch() override;

	virtual void Update() override;

	UFUNCTION(BlueprintPure)
	EMainSignType GetMainSignType() const { return Type; }

	UFUNCTION(BlueprintCallable)
	void ChangeSignType(EMainSignType NewType);

	UFUNCTION(BlueprintPure)
	UTrafficSignValue* GetSignValue() const { return  ValueDeclaration; }

	UFUNCTION(BlueprintPure)
	ESignDirectionScope GetDirectionScope() const { return  DirectionScope; }

	UFUNCTION(BlueprintCallable)
	void ChangeDirectionScope(ESignDirectionScope NewScope);

	UFUNCTION(BlueprintPure)
	bool IsVerticallyMirrored() const { return bVerticallyMirrored; }

	UFUNCTION(BlueprintCallable)
	void ChangeIsVerticallyMirrored(bool bNewIsVerticallyMirrored);

	UFUNCTION(BlueprintPure)
	bool IsOutOfService() const { return bIsOutOfService; }

	UFUNCTION(BlueprintCallable)
	void ChangeOutOfService(bool bNewIsOutOfService);

	UFUNCTION(BlueprintPure)
	FString GetCountry() const { return Country; }

	UFUNCTION(BlueprintPure)
	FString GetCountryRevision() const { return CountryRevision; }

	UFUNCTION(BlueprintPure)
	FString GetCode() const { return Code; }

	UFUNCTION(BlueprintPure)
	FString GetSubCode() const { return SubCode; }

protected:

	osi3::TrafficSign_MainSign_Classification* InternalClassification;

	//This value indicates if a sign is static or dynamic regarding its content (e.g., electronic sign bridge) and/or regarding its position on the road. 
	UPROPERTY(EditAnywhere, Category="DECL")
	ETrafficSignVariability Variability;

	//The type of the traffic sign. Attention: Deprecated: A revision is planned for version 4.0.0 to replace the type enum with a more semantically defined enumeration, with the exact sign specification being relegated to the newly introduced 4-tupel traffic sign catalog specification as used in OpenDRIVE. 
	UPROPERTY(EditAnywhere, Category="DECL")
	EMainSignType Type;

	//Additional value associated with the traffic sign, e.g. value of the speed limit. Note Field need not be set if traffic sign type does not require it. 
	UPROPERTY(EditAnywhere, Category="DECL")
	UTrafficSignValue* ValueDeclaration;

	//Some traffic signs have an additional arrow symbol as an additional constraint for their scope (e.g. no parking to the right). The arrow direction is given relative to the sign's 2D image plane, i.e. as a viewer standing right in front of the sign and looking straight towards it would interpret the arrow. The definition for left and right is according to the following temporarily constructed right-handed local coordinate system: Set z-axis to match the z-axis of the ground truth coordinate system. Set x-axis to the view normal of the traffic sign's image (base BaseStationary::orientation x-axis). Right: direction of the local coordinate system's positive y-axis. Left: opposite direction of the local coordinate system's y-axis i.e. negative y-axis', Note: If a traffic sign image is on the ground (there is no definition for right or left). Normally, this is a road marking and not a traffic sign. Actual traffic signs lying on the ground might have been intentionally unmounted and, hence, not be in effect. Attention: Deprecated: A revision is planned for version 4.0.0 to replace the type enum with a more semantically defined enumeration, with the exact sign specification being relegated to the newly introduced 4-tupel traffic sign catalog specification as used in OpenDRIVE. 
	UPROPERTY(EditAnywhere, Category="DECL")
	ESignDirectionScope DirectionScope;

	//The IDs of the lanes that the sign is assigned to. May be multiple if the sign is valid for multiple lanes.
	//TODO: Add assigned lane ids TArray<uint64> 

	//Some traffic signs exist in two variants that have a similar semantic meaning but differ in that the symbol of the one corresponds to the specular reflection of the other with respect to the vertical axis. For some scenarios it might be relevant to choose the reflected version of a reference sign. This can be done by setting the vertically_mirrored boolean to true. As for every boolean in the protocol buffers language, the default value of vertically_mirrored is false.
	UPROPERTY(EditAnywhere, Category="DECL")
	bool bVerticallyMirrored;

	//Boolean flag to indicate that a traffic sign is taken out of service. This can be achieved by visibly crossing the sign or covering it completely.
	UPROPERTY(EditAnywhere, Category="DECL")
	bool bIsOutOfService;

	//Country specification of the traffic sign catalog specification that identifies the actual traffic sign. This is part of the 4-tupel traffic sign catalog specification as used in OpenDRIVE. Country is specified using the ISO 3166-1, alpha-2 code https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2, or the special OpenDRIVE country for generic signs.
	UPROPERTY(EditAnywhere, Category="DECL")
	FString Country;

	//Revision specification of the traffic sign catalog specification that identifies the actual traffic sign. This is part of the 4-tupel traffic sign catalog specification as used in OpenDRIVE. The year the traffic rules came into force, e.g. \"2017\"
	UPROPERTY(EditAnywhere, Category="DECL")
	FString CountryRevision;

	//Code specification of the traffic sign catalog specification that identifies the actual traffic sign. This is part of the 4-tupel traffic sign catalog specification as used in OpenDRIVE. Code identifier according to country and country revision, corresponds to the type field of OpenDRIVE. code is only unique in combination with country and country_revision, e.g. http://www.vzkat.de/2017/VzKat.htm
	UPROPERTY(EditAnywhere, Category="DECL")
	FString Code;

	//Sub-code specification of the traffic sign catalog specification that identifies the actual traffic sign. This is part of the 4-tupel traffic sign catalog specification as used in OpenDRIVE. Sub-code identifier according to country, country revision and code, corresponds to the subtype field of OpenDRIVE. sub_code is only unique in combination with country, country_revision, and code. e.g. http://www.vzkat.de/2017/VzKat.htm
	UPROPERTY(EditAnywhere, Category="DECL")
	FString SubCode;

	//Assignment of this object to logical lanes. 
	//TODO: Logical Lane Assignment
	
	bool bIsDirty=false;

	//marks the osi data dirty
	void MarkDirty() { bIsDirty=true; }

	//dispatches all values
	void DispatchAll();
};
