#include <stdio.h>

int main()
{
	int i = 1;

	while (i <= 5)
	{
		for (int n = 0; n < i; n++)
		{
			printf("#");
		}
		
		printf("\n");

		i++;
	}

	printf("\n\n");

	return 0;
}