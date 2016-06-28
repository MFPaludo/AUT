#include <stdio.h>
#include <math.h>

int main()
{
	int input;
	printf("Please enter a whole number: ");
	scanf("%d", &input);

	int cube = pow (input, 3);
	printf("%d cubed is: %d\n", input, cube);

	return 0;
}