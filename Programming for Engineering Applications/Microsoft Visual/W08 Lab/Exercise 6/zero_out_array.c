#include <stdio.h>

void zero_out_array(int* p_array, int num_elements)
{
	printf("zero_out_array called:\n");

	for (int i = 0; i < num_elements; i++)
	{
		p_array[i] = 0;
	}

	printf("\n");
}