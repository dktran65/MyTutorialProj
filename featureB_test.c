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
	char a= 3;
	int bV[2] ={1,2};
	
	bV[4] = 5;
	a = (int) 1234;
	
	alloc_data();
	// Resolution: Rewtire to use as followed...
	void* ptr = alloc_data(); 
	free(ptr);
}

