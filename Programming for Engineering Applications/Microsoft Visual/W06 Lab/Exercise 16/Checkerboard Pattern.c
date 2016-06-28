#include <stdio.h>

int main()
{
	for (int i = 0; i < 4; i++)
	{
		for (int n = 0; n < 4; n++)
		{
			printf("black white ");
		}
		
		printf("\n");
		
		for (int a = 0; a < 4; a++)
		{
			printf("white black ");
		}

		printf("\n");
	}

	printf("\n\n");

	return 0;
}