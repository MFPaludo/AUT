#include <stdio.h>

void draw_triangle(int height)
{
	for (int base = 0; base < height * 2; base++)
	{
		printf("_");
	}

	for (int line = height; line >= 0; line--)
	{
		for (int spaces = height - line - 1; spaces > 0; spaces--)
		{
			printf(" ");
		}

		for (int blocks = 0; blocks <= line * 2 + 1; blocks++)
		{
			if (line != height)
			{
				if (blocks == 0)
				{
					printf("\\");
				}
				else if (blocks == line * 2 + 1)
				{
					printf("/");
				}
				else
				{
					printf(" ");
				}
			}
		}

		printf("\n");
	}
}