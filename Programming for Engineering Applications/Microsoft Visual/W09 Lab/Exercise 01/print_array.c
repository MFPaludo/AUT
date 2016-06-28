#include <stdio.h>
#include <stdlib.h>

void print_array(int** pointer_array, int array_size)
{
	for (int i = 0; i < array_size; i++)
	{
		printf("%d, ", pointer_array[i]);
	}

	printf("\n\n");
}