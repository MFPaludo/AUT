#include <stdio.h>
int main()
{
	int basic_array[] = { 10, 21, 32, 43, 54, 65, 76 };
	
	printf("Element 0 holds: %d\n", basic_array[0]);
	printf("Element 1 holds: %d\n", basic_array[1]);
	printf("Element 2 holds: %d\n", basic_array[2]);
	printf("Element 3 holds: %d\n", basic_array[3]);
	printf("Element 4 holds: %d\n", basic_array[4]);
	printf("Element 5 holds: %d\n", basic_array[5]);
	printf("Element 6 holds: %d\n", basic_array[6]);
	
	// Flip the sign on each element:
	basic_array[0] *= -1;
	basic_array[1] *= -1;
	basic_array[2] *= -1;
	basic_array[3] *= -1;
	basic_array[4] *= -1;
	basic_array[5] *= -1;
	basic_array[6] *= -1;
	
	printf("Element 0 holds: %d\n", basic_array[0]);
	printf("Element 1 holds: %d\n", basic_array[1]);
	printf("Element 2 holds: %d\n", basic_array[2]);
	printf("Element 3 holds: %d\n", basic_array[3]);
	printf("Element 4 holds: %d\n", basic_array[4]);
	printf("Element 5 holds: %d\n", basic_array[5]);
	printf("Element 6 holds: %d\n", basic_array[6]);
	
	return 0;
}