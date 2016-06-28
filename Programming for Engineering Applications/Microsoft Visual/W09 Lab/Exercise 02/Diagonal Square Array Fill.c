#include <stdio.h>
#include <stdlib.h>

int main()
{
	int diagonal_array[5][5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		for (int n = 0; n < 5; n++)
		{
			printf("%d, ", diagonal_array[i][n]);
		}
		printf("\n\n");
	}

	printf("Populating array.\n\n");

	int diagonal_variable = 1;

	for (int row = 0; row < 5; row++)
	{
		diagonal_variable = diagonal_variable * 2;

		for (int column = 0; column < 5; column++)
		{
			if (row == column)
			{
				diagonal_array[row][column] = diagonal_variable;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int n = 0; n < 5; n++)
		{
			printf("%d, ", diagonal_array[i][n]);
		}
		printf("\n");
	}

	printf("\n\n");

	return 0;
}