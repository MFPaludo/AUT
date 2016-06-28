#include <stdio.h>

void print_array(int* p_array, int num_elements)
{
	printf("print_array called:\n");

	for (int i = 0; i < num_elements; i++)
	{
		printf("%d ", p_array[i]);
	}

	printf("\n\n");
}