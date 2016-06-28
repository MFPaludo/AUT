#include <stdio.h>

int main()
{
	int x;

	printf("Input a whole number: ");
	scanf("%d", &x);

	if (x > 0)
	{
		printf("Input is a positive number.\n");
	}
	else if (x < 0)
	{
		printf("Input is a negative number.\n");
	}
	else
	{
		printf("Input is zero.\n");
	}

	return 0;
}