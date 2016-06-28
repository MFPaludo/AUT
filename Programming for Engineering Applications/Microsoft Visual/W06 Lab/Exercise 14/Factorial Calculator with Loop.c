#include <stdio.h>

int main()
{
	int number;
	printf("Enter a non-negative whole number: ");
	scanf("%d", &number);
	printf("\n");

	printf("%d! is ", number);

	int result = 1;

	for (int i = number; i > 0; i--)
	{
		result = result * number;
		number--;
	}

	printf("%d", result);

	printf("\n\n");

	return 0;
}