#include <stdio.h>

int main()
{
	int x = 0;

	printf("Input a number: ");

	scanf("%d", &x);

	if (x > 100)
	{
		printf("Greater than one-hundred...\n");
	}
	else if (x > 50)
	{
		printf("Greater than fifty,\n");
		printf("But less than one-hundred...\n");
	}
	else if (x > 25)
	{
		printf("That is greater than twenty-five,\n");
		printf("But less than fifty...\n");
	}
	else if (x > 0)
	{
		printf("That is greater than zero,\n");
		printf("But less than twenty-five...\n");
	}
	else if (x == 0)
	{
		printf("That is zero...\n");
	}
	else
	{
		printf("That is negative...\n");
	}

	printf("The user input %d.\n", x);

	return 0;
}