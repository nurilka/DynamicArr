/* by Nurit (H-45), HW-4 (Insert values from std in into array), 03.04.2017 

	- Main file */

#include <stdlib.h>
#include <stdio.h>
#include "insertValuesH.h"


int main()
{
	unsigned int capacity, counter = 0;
	int value, i;
	int* destArr = NULL;
	int* tmpArr = NULL;
	
	
	printf("Enter capacity for array: \n");
	scanf("%u", &capacity);
	
	destArr = (int*)malloc(capacity*sizeof(int));
	/* check if OK after malloc */
	if(destArr == NULL)
	{
		return ERR;
	}
	
	/* scan values from stdin up until terminating sequence -1 */
	while(1)
	{
		printf("Type a value to insert in arr, to stop type -1 \n");
		scanf("%d", &value);
		if(value == -1)
		{ 
			break;
		}
		
		/* send the value to insertVal function  */		

		tmpArr = insertVal(value, destArr, &capacity, &counter);
		/* check if the function did not return NULL, because it can!! */
		if(tmpArr == NULL)
		{
			return ERR;
		}
		else
		{
			/* not to loose the original destArr */
			destArr = tmpArr;
		}
	}
	
	/* print the final array */
	printf("The array is: \n");
	for (i = 0; i < counter; ++i)
	{
		printf("%d  ", *(destArr + i));
	}
	putchar('\n');
	
	/* free memory after malloc */
	free(destArr);
	destArr = NULL;
	
	return OK;
} /* end of main */









