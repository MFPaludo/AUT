#include <stdio.h>

int main()
{
	int x = 0;

	printf("Input a number: ");

	scanf("%d", &x);

	if (x < 50)
	{
		printf("That is less than 50...\n");
	}
	else
	{
		printf("That is not less than to 50...\n");
	}

	printf("The user input %d.\n", x);

	return 0;
}