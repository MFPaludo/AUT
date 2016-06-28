#include <stdio.h>

int main()
{
	int x = 0;

	printf("Input a number: ");

	scanf("%d", &x);

	if (x < 50)
	{
		printf("That is less than fifty...\n");
		if (x > 20)
		{
			printf("And greater than twenty.\n");
		}
		else
		{
			printf("And less than or ");
			printf("equal to twenty.\n");
		}
	}

	printf("The user input %d.\n", x);

	return 0;
}