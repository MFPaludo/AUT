#include <stdio.h>
#include <stdlib.h>

int main()
{
	int matrix_a[4][4] =
	{ 
		{ 1, 3, 2, 5 },
		{ 4, 5, 2, 4 },
		{ 2, 1, 2, 2 },
		{ 5, 3, 3, 1 }
	};

	printf("Matrix A:\n\n");

	printf("\n\n");

	for (int i = 0; i < 4; i++)
	{
		for (int n = 0; n < 4; n++)
		{
			printf("%d, ", matrix_a[i][n]);
		}
		printf("\n\n");
	}

	printf("\n\n");

	int matrix_b[4][4] =
	{
		{ 2, 2, 4, 1 },
		{ 1, -5, 2, 3 },
		{ 4, 3, -2, 5 },
		{ 6, 7, 3, 2 }
	};

	printf("Matrix B:\n\n");

	for (int i = 0; i < 4; i++)
	{
		for (int n = 0; n < 4; n++)
		{
			printf("%d, ", matrix_b[i][n]);
		}
		printf("\n\n");
	}

	printf("\n\n");

	int result[4][4];

	for (int row = 0; row < 4; row++)
	{
		for (int column = 0; column < 4; column++)
		{
			result[row][column] = matrix_a[row][column] + matrix_b[row][column];
		}
		printf("\n");
	}

	printf("Result:\n\n");

	for (int i = 0; i < 4; i++)
	{
		for (int n = 0; n < 4; n++)
		{
			printf("%d, ", result[i][n]);
		}
		printf("\n\n");
	}

	printf("\n\n");

	return 0;
}