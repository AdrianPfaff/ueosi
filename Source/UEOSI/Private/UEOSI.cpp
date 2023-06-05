// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEOSI.h"
#include "Modules/ModuleManager.h"
#include "OSI/Includes/osi_sensorview.pb.h"

#define LOCTEXT_NAMESPACE "FUEOSIModule"

void FUEOSIModule::StartupModule()
{

}

void FUEOSIModule::ShutdownModule()
{
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUEOSIModule, UEOSI)
