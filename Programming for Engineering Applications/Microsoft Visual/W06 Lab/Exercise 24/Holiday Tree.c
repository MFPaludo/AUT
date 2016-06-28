#include <stdio.h>

int main()
{
	int rows;
	printf("How high would you like the tree?");
	scanf("%d", &rows);

	for (int line = 0; line <= rows; line++)
	{
		if (rows == 1)
		{
			printf("  ");
		}

		else if (rows == 2)
		{
			printf(" ");
		}

		for (int spaces = rows - line; spaces > 0; spaces--)
		{
			printf(" ");
		}

		for (int blocks = 0; blocks < line; blocks++)
		{
			printf("* ");
		}

		printf("\n");
	}

	for (int base = 0; base < rows - 3; base++)
	{
		printf(" ");
	}
	printf("_| |_\n");

	for (int base = 0; base < rows - 3; base++)
	{
		printf(" ");
	}
	printf("\\___/\n");

	printf("\n\n");

	return 0;
}