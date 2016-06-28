#include <stdio.h>

int main()
{
	int a, b, c;

	int width;
	printf("Rectangle width? ");
	scanf("%d", &width);

	int height;
	printf("Rectangle height? ");
	scanf("%d", &height);

	for (a = height; a > 0; a--)
	{
		if (a == height || a == 1)
		{
			for (b = width; b > 0; b--)
			{
				if (b == width || b == 1)
				{
					printf("+");
				}
				else
				{
					printf("-");
				}
			}
			printf("\n");
		}
		else
		{
			for (c = width; c > 0; c--)
			{
				if (c == width || c == 1)
				{
					printf("|");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}

	printf("\n\n");

	return 0;
}