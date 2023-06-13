// Copyright 2023 Adrian Pfaff

#include "OsiIDProvider.h"

bool FOsiIDProvider::AddReservedID(uint64 InID)
{
	FScopeLock ScopeLock(&Section);
	if(InID<NextID || ReservedIDs.Contains(InID))
	{
		//ID cannot be reserved
		return false;
	}

	if(InID==NextID)
	{
		++NextID;
		return true;
	}

	ReservedIDs.Add(InID);
	return true;
}

uint64 FOsiIDProvider::RequestID()
{
	FScopeLock ScopeLock(&Section);

	return NextID++;
}

FOsiIDProvider& FOsiIDProvider::DefaultProvider()
{
	static FOsiIDProvider Singleton;
	return Singleton;
}
