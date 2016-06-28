#include <stdio.h>

int count_evens(int* int_array, int elements);

int count_evens(int* int_array, int elements)
{
	int counter = 0;

	for (int i = 0; i < elements; i++)
	{
		if (int_array[i] % 2 == 0)
		{
			counter++;
		}
	}

	return counter;
}

int main()
{
	int test_data[] = { 5, 3, 2, 4, 1, 8, 10, 2, 7 };

	int result = count_evens(&test_data, 9);

	printf("There are %d even numbers in the array.", result);
	
	printf("\n\n");

	return 0;
}