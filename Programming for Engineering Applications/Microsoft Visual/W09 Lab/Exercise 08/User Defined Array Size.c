#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int array_size;
	printf("How many int elements will you enter? ");
	scanf("%d", &array_size);
	printf("\n\n");

	int *int_array = (int*)malloc(array_size, sizeof(int));

	for (int size = 0; size < array_size; size++)
	{
		printf("Element %d: ", size + 1);
		scanf("%d", &int_array[size]);
	}

	printf("\n\n");

	printf("The array stores the following values:");

	printf("\n\n");

	for (int size = 0; size < array_size; size++)
	{
		printf("%d, ", int_array[size]);
	}

	printf("\n\n");

	return 0;
}