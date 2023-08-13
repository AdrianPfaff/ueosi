// Copyright 2023 Adrian Pfaff

#pragma once


class FOsiIDProvider
{
public:

	//add an ID as reserved, returns true only if ID was not reserved yet and could be reserved
	bool AddReservedID(uint64 InID);

	uint64 RequestID();

	static FOsiIDProvider& DefaultProvider();

	//frees all ids and begins counting a new. called from osi world subsystem on shutdown
	void Reset();

private:
	
	uint64 NextID=0;

	mutable FCriticalSection Section;

	TSet<uint64> ReservedIDs;

	FOsiIDProvider()= default;
	~FOsiIDProvider()= default;
	FOsiIDProvider(const FOsiIDProvider&)= delete;
	FOsiIDProvider& operator=(const FOsiIDProvider&)= delete;
};
