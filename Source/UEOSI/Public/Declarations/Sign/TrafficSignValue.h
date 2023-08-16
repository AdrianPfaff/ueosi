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

	UFUNCTION(BlueprintPure)
	double GetValue() const { return Value;}

	UFUNCTION(BlueprintCallable)
	void ChangeValue(double NewValue);

	UFUNCTION(BlueprintPure)
	ETrafficSignUnit GetValueUnit() const { return ValueUnit; }

	UFUNCTION(BlueprintCallable)
	void ChangeSignUnit(ETrafficSignUnit NewUnit);

	UFUNCTION(BlueprintPure)
	FText GetText() const { return  Text; }

	UFUNCTION(BlueprintCallable)
	void ChangeText(const FText& NewText);

	
protected:

	osi3::TrafficSignValue* InternalValue;

	//Additional value associated with a traffic sign or road marking, e.g. value of a speed limit.
	UPROPERTY(EditAnywhere)
	double Value;

	//Unit for additional value.
	UPROPERTY(EditAnywhere)
	ETrafficSignUnit ValueUnit;

	//Text associated with a sign, e.g. the name of a location whose distance to the sign is indicated therein. The interpretation of this text is left to a user-defined procedure.
	UPROPERTY(EditAnywhere)
	FText Text;

	bool bIsDirty=false;

	void MarkDirty() { bIsDirty=true; }
	
	void DispatchAll();
};
