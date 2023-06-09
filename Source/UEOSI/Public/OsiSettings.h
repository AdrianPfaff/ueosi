// Copyright 2023 Adrian Pfaff

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "OsiSettings.generated.h"

/**
 * 
 */
UCLASS()
class UEOSI_API UOsiSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:

	//the interval in which the osi data should be updated and saved to the buffer.
	UPROPERTY(EditAnywhere)
	float OsiIntervalMS=16.6;

	//how many frames should be saved in the buffer. defaults to one minute (default interval is equal to 60 frames per second, 60*60=1min) will be rounded to nearest power of 2
	UPROPERTY(EditAnywhere)
	uint64 TraceFrameBufferSize=60*60;
};
