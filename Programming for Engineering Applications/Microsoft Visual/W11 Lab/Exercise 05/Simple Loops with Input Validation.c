#include <stdio.h>

int main()
{
	int input;
	printf("Enter a positive whole number: ");
	scanf("%d", &input);

	for (int i = input; i > 0; i--)
	{
		printf("%d", input);

		for (int n = input; n > 0; n--)
		{
			printf(".");
		}

		printf("\n");

		input--;
	}

	printf("The counter has finished!");

	printf("\n\n");

	return 0;
}