#include <stdio.h>

int calculate_cube(int input);

int main()
{
	int input;
	printf("Input a number: ");
	scanf("%d", &input);

	int cube = calculate_cube(input);
	printf("The cube of %d is %d.", input, cube);

	printf("\n\n");

	return 0;
}