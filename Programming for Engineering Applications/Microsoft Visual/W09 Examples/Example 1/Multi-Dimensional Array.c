#include <stdio.h>

int main()
{
	int the_array[5][4] =
	{
		{ 0, 1, 2, 3 },
		{ 4, 5, 6, 7 },
		{ 8, 9, 10, 11 },
		{ 12, 13, 14, 15 },
		{ 16, 17, 18, 19 }
	};

	for (int k = 0; k < 5; ++k)
	{
		for (int i = 0; i < 4; ++i)
		{
			printf("%d ", the_array[k][i]);
		}

		printf("\n");
	}

	printf("\n\n");

	return 0;
}