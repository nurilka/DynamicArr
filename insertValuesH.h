/* by Nurit (H-45), HW-4 (Insert values from stdin into array), 03.04.2017 

	- Header with defines and prototypes */
	
	
#ifndef

#define ERR -1
#define OK	0


/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/* saves values allocated memory segment
	- checks if the initial allocation is sufficient
	- if ok:
			places value 
	- if not:
			allocates double the initial capacity
			re-allocates (i frequired) the original
			then places value
			
	input:
	1) int Val - value
	2) int* Array - address of the first element of allocated memory segment
	3) int* cap - address of the capacity value, to check if there is enough places
	4) int* counter - address of the counter value, to count times the value was placed
	
	output:
	1) int* - address of the first element of the allocated memory segment
	2) NULL - if allocation points to NULL
		
		by reference:
		a) updates capacity that is saved in main, so that every time the function enters with updated capacity
		b) updates counter, so that the amount of times the value was placed would be available outside the function

	*/
int* insertVal(int Val, int* Arr, int* cap, int* counter);

