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

	int element = 1;

	for (int row = 0; row < 5; row++)
	{
		for (int column = 0; column < 5; column++)
		{
			diagonal_array[row][column] = element;
			element++;
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