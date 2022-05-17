/*
 * File: defect_test.cpp
 */
#include <stdlib.h>

//PRQA S 3205 ++  # Testing - Turn OFF the 3205 Error Code for this file

int main() {
	char *a;
	int b=1;		//PRQA S 2211 # Testing - Turn OFF  the Error 2211 for this line ONLY

	free(a);
	return 0;
}

void array_boundery_violation()
{
	int aBV[3] = {1,2,3};

	aBV[4]= 5;	//PRQA S 2840 # Another supp OFF for snaphot 4
}


void null_pointer_deference_general_must()
{
	int *iPtr = NULL;
	int abc=3;

	*iPtr = 2;

}
