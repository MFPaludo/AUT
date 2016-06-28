#include <stdio.h>

int main()
{
	int high;
	printf("How high would you like the pyramid? ");
	scanf("%d", &high);

	for (int line = 0; line <= high; line++)
	{
		for (int spaces = high - line; spaces > 0; spaces--)
		{
			printf(" ");
		}

		for (int blocks = 0; blocks < line * 2; blocks++)
		{
			printf("*");
		}

		printf("\n");
	}

	printf("\n\n");

	return 0;
}