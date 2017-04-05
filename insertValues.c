/* by Nurit (H-45), HW-4 (Insert values from std in into array), 03.04.2017 

	- Functions file */

#include <stdlib.h>
#include <stdio.h>
#include "insertValuesH.h"


int* insertVal(int Val, int* Arr, int* cap, int* counter)
{
	int* tmpArr = NULL;
	
			/* Check all inputs that are pointers */
			/* TODO*/
	
			if ( (*counter + 1) > *cap )
			{
				/* calculate the double of the capacity for further comparison and for SIZE for realloc */

				
				tmpArr = (int*)realloc(Arr, ((*cap)*2)*sizeof(int));
				
				/* test with this: 	printf("entered!\n");    */
				
				/* check if allocation did not happen */
				if(tmpArr == NULL)
				{
					return NULL;
				}
				else
				{
					/* not to loose the original Arr */
					Arr = tmpArr;
					*cap *= 2;
				}
			}
		
			*(Arr + *counter) = Val;
			*counter += 1;

	return Arr;
}/* end of function */
