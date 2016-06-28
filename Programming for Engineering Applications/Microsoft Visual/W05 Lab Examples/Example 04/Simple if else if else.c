#include <stdio.h>

int main()
{
	int x = 0;

	printf("Input a number: ");

	scanf("%d", &x);

	if (x < 50)
	{
		printf("That is less than fifty...\n");
	}
	else if (x > 50)
	{
		printf("That is greater than fifty...\n");
	}
	else
	{
		printf("That is fifty...\n");
	}

	printf("The user input %d.\n", x);

	return 0;
}