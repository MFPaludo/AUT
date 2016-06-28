#include <stdio.h>

void iterate_last_to_first()
{
	int data[] = { 25, 300, 120, 6 };
	int* pointer = 0;

	pointer = data;

	for (int k = 4; k > 0; ++k)
	{
		printf("Address of data[%d] is %X\n", k, pointer);
		printf("Value of data[%d] is %d\n", k, *pointer);
		printf("\n");

		pointer++;
	}
}