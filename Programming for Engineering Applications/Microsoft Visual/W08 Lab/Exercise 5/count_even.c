#include <stdio.h>

int count_even(int* data_array, int size)
{
	int count_even = 0;

	for (int i = 0; i < size; i++)
	{
		if (data_array[i] % 2 == 1)
		{
			count_even++;
		}
	}

	return count_even;
}