// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEOSIEditor.h"

#include "Declaration.h"
#include "DeclarationPropertyCustomization.h"
#include "PropertyEditorDelegates.h"
#include "PropertyEditorModule.h"
#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "FUEOSIEditorModule"

const FName DeclClassName=UDeclaration::StaticClass()->GetFName();

void FUEOSIEditorModule::StartupModule()
{
	
	auto& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	// to register our custom property
	PropertyModule.RegisterCustomPropertyTypeLayout(
		DeclClassName,
		// this is where our MakeInstance() method is usefull
		FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FDeclarationPropertyCustomization::NewInstance));

	PropertyModule.NotifyCustomizationModuleChanged();
}

void FUEOSIEditorModule::ShutdownModule()
{
	auto& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyModule.UnregisterCustomPropertyTypeLayout(DeclClassName);

	PropertyModule.NotifyCustomizationModuleChanged();
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUEOSIEditorModule, UEOSIEditor)
