#include <stdio.h>

int main()
{
	for (int i = 5; i > 0; i--)
	{
		for (int a = i - 1; a > 0; a--)
		{
			printf(" ");
		}

		for (int n = 5 - (i - 1); n > 0; n--)
		{
			printf("#");
		}

		printf("\n");
	}

	printf("\n\n");

	return 0;
}