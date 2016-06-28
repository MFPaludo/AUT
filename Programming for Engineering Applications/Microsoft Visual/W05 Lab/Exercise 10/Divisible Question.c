#include <stdio.h>

int main()
{
	int input;
	printf("Please input a whole number: ");
	scanf("%d", &input);
	printf("\n");

	int rest_2 = input % 2;
	int rest_3 = input % 3;

	if (rest_2 != 0 && rest_3 != 0)
	{
		printf("%d is not divisible by 2 or 3.", input);
	}
	else if (rest_2 == 0 && rest_3 != 0)
	{
		printf("%d is divisible by 2, but not by 3.", input);
	}
	else if (rest_2 != 0 && rest_3 == 0)
	{
		printf("%d is divisible by 3, but not by 2.", input);
	}
	else if (rest_2 == 0 && rest_3 == 0)
	{
		printf("%d is divisible by 2 and 3.", input);
	}

	printf("\n\n");

	return 0;
}