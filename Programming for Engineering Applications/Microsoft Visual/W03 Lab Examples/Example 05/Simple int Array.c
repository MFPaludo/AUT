#include <stdio.h>

int main()
{
	int basic_array[7];

	basic_array[0] = 100;
	basic_array[1] = 201;
	basic_array[2] = 302;
	basic_array[3] = 403;
	basic_array[4] = 504;
	basic_array[5] = 605;
	basic_array[6] = 706;

	printf("Element 0 holds: %d\n", basic_array[0]);
	printf("Element 1 holds: %d\n", basic_array[1]);
	printf("Element 2 holds: %d\n", basic_array[2]);
	printf("Element 3 holds: %d\n", basic_array[3]);
	printf("Element 4 holds: %d\n", basic_array[4]);
	printf("Element 5 holds: %d\n", basic_array[5]);
	printf("Element 6 holds: %d\n", basic_array[6]);
	
	return 0;
}