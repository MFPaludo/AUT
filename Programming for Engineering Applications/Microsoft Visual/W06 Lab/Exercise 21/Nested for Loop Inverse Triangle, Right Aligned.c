#include <stdio.h>

int main()
{
	for (int i = 5; i > 0; i--)
	{
		for (int n = 5 - i; n > 0; n--)
		{
			printf(" ");
		}

		for (int a = i; a > 0; a--)
		{
			printf("#");
		}

		printf("\n");
	}

	printf("\n\n");

	return 0;
}