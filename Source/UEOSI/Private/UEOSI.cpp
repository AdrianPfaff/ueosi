// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEOSI.h"
#include "Modules/ModuleManager.h"
#include "OSI/Includes/osi_sensorview.pb.h"

#define LOCTEXT_NAMESPACE "FUEOSIModule"

void FUEOSIModule::StartupModule()
{
	
	// Call the test function in the third party library that opens a message box
	osi3::SensorView view;
	auto camview=view.add_camera_sensor_view();

}

void FUEOSIModule::ShutdownModule()
{
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUEOSIModule, UEOSI)
