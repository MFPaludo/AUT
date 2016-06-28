#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *int_array = (int*)malloc(3, sizeof(int));

	int_array[0] = 150;
	int_array[1] = 275;
	int_array[2] = 400;

	printf("First Element: %d\n", int_array[0]);
	printf("Second Element: %d\n", int_array[1]);
	printf("Third Element: %d", int_array[2]);

	printf("\n\n");

	return 0;
}