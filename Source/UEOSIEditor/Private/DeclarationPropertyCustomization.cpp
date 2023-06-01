#include "DeclarationPropertyCustomization.h"

#include "DetailWidgetRow.h"
#include "IDetailChildrenBuilder.h"

void FDeclarationPropertyCustomization::CustomizeHeader(TSharedRef<IPropertyHandle> StructPropertyHandle,
                                                        FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	HeaderRow.NameContent()[StructPropertyHandle->CreatePropertyNameWidget()];
	HeaderRow.ValueContent()[StructPropertyHandle->CreatePropertyValueWidget()];
}

void FDeclarationPropertyCustomization::CustomizeChildren(TSharedRef<IPropertyHandle> StructPropertyHandle,
	IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	
	//the StructPropertyHandle is not the actual Declaration, but the field containing the declaration
	//since this is a simple field (not a container or struct type), we can just access the Declaration by getting the
	//first child
	//since we take care to use instanced fields that get saved with the owning asset, it is valid to bind and edit props
	//inside the property view even if they are pointers
	auto ObjHandle=StructPropertyHandle->GetChildHandle(0);

	//it is technically possible the field is not filled in, so we might just skip this
	if(!ObjHandle)
	{
		return;
	}

	//we can retrieve the field we want to show from the class itself
	for(TFieldIterator<FProperty> Prop(ObjHandle->GetOuterBaseClass()); Prop; ++Prop)
	{
		//if the field is in the correct category, we want to add it
		auto Category = Prop->GetMetaData(FName("Category"));
		if(Category == "DECL")
		{
			//now we have to retrieve the field handle from the actual object, not the class and add it
			auto PropHandle=ObjHandle->GetChildHandle(Prop->GetFName());
			StructBuilder.AddProperty(PropHandle.ToSharedRef());
		}
		
	}
	
	
}

TSharedRef<IPropertyTypeCustomization> FDeclarationPropertyCustomization::NewInstance()
{
	return MakeShared<FDeclarationPropertyCustomization>();
}
