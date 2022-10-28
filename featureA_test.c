/*
 * File: defect_test.cpp
 */
#include <stdlib.h>

void array_boundery_violation()
{
	int aBV[3] = {1,2,3};

	aBV[4]= 5;
}


void null_pointer_deference_general_must()
{
	int *iPtr = NULL;

	// Uncomment... Will show NPD
	// *iPtr = 2;

}

int my_result()
{
	int a = 1;
	int b = 2;
	int c;
	
	c = a + b;
	return c;
}
