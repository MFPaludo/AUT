#include <stdio.h>
#include <stdlib.h>

void print_array(int* pointer_array, int array_size);
void sort_array(int* pointer_array, int array_size);

int main(int argc, char* argv[])
{
	int array_size;
	printf("Enter the array size: ");
	scanf("%d", &array_size);
	printf("\n\n");

	int *int_array = (int*)malloc(array_size, sizeof(int));

	print_array(int_array, array_size);

	sort_array(int_array, array_size);

	print_array(int_array, array_size);

	printf("\n\n");

	return 0;
}