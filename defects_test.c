/*
 * File: defect_test.cpp
 */
#include <stdlib.h>

int main() {
	char *a;
	int b=1;		
	char str_array[10];
    char *p_str = str_array;
    char value;

    sprintf(str_array,"This defect is about long format string\n");
    printf("The value of P is %s", *p_str);
    *p_str = NULL;

    value = *p_str;
    printf("The date for value is%s", value);

	free(a);
	return 0;
}

void array_boundery_violation()
{
	int aBV[3] = {1,2,3};

	aBV[4]= 5;	
}


void null_pointer_deference_general_must()
{
	int *iPtr = NULL;
	int abc=3;

	*iPtr = 2;

}
