/*
 * File: defect_test.cpp
 */
#include <stdlib.h>

void* alloc_data()
{
	return malloc(10);
}


void memory_leak_violation()
{
	alloc_data();
	// Resolution: Rewtire to use as followed...
	void* ptr = alloc_data(); 
	free(ptr);
}

