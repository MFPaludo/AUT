#include <stdio.h>

void print_int_array(int* int_array, int elements);

void print_int_array(int* int_array, int elements)
{
	for (int i = 0; i < elements; i++)
	{
		printf("%d; ", int_array[i]);
	}

	printf("\n\n");
}

int main()
{
	int numbers[] = { 5, 3, 14, 3, 2, 1, 8, 12, 0, 2, 7, 8 };

	print_int_array(&numbers, 12);

	printf("\n\n");

	return 0;
}