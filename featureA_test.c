/*
 * File: defect_test.cpp
 */
#include <stdlib.h>

void array_boundery_violation()
{
	int aBV[3] = {1,2,3};

	aBV[4]= 5;
	char str_array[10];
    char *p_str = str_array;
    char value;

    sprintf(str_array,"Is this string fit in this array? \n");
	printf("The str_array side is %d...", size(str_array));
    printf("The value of P is %s", *p_str);
    *p_str = NULL;

    value = *p_str;
    printf("The date for value is%s", value);
	
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
