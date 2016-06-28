#include <stdio.h>

int main()
{
	int i;

	for (i = 5; i >= 0; i--)
	{
		for (int n = 0; n < i; n++)
		{
			printf("#");
		}
		
		printf("\n");
	}

	printf("\n\n");

	return 0;
}