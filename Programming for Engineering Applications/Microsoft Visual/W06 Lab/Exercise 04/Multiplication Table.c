#include <stdio.h>

int main()
{
	int number;
	printf("Enter a whole number: ");
	scanf("%d", &number);

	printf("\n\n");

	printf("The %d Times Table:\n", number);
	printf("------------------");

	printf("\n\n");

	int result = 0;

	for(int i = 0; i <= 14; i++)
	{
		result = number * i;
		printf("%d x %d = %d\n", i, number, result);
	}

	printf("\n");

	return 0;
}