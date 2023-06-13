// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Declaration.h"
#include "TypeWrappers/SignEnumWrappers.h"
#include "TrafficSignValue.generated.h"

namespace osi3
{
	class TrafficSignValue;
}

/**
 * 
 */
UCLASS()
class UEOSI_API UTrafficSignValue : public UDeclaration
{
	GENERATED_BODY()

public:
	void Initialize(osi3::TrafficSignValue* ValueResource);

	virtual void InitialDispatch() override;

	virtual void Update() override;

protected:

	osi3::TrafficSignValue* InternalValue;

	//Additional value associated with a traffic sign or road marking, e.g. value of a speed limit.
	UPROPERTY(EditAnywhere, Category="DECL")
	double Value;

	//Unit for additional value.
	UPROPERTY(EditAnywhere, Category="DECL")
	ETrafficSignUnit ValueUnit;

	//Text associated with a sign, e.g. the name of a location whose distance to the sign is indicated therein. The interpretation of this text is left to a user-defined procedure.
	UPROPERTY(EditAnywhere, Category="DECL")
	FText Text;
	
	
};
