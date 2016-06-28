#include <stdio.h>

void draw_triangle(int height)
{
	for (int line = 1; line <= height; line++)
	{
		for (int spaces = height - line; spaces > 0; spaces--)
		{
			printf(" ");
		}

		for (int blocks = 0; blocks <= line * 2; blocks++)
		{
			if (line != height)
			{
				if (blocks == 0)
				{
					printf("/");
				}
				else if (blocks == line * 2)
				{
					printf("\\");
				}
				else
				{
					printf(" ");
				}
			}
		}
		if (line != height)
		{
			printf("\n");
		}
	}

	printf("/");
	for (int base = 0; base < height * 2 - 1; base++)
	{
		printf("_");
	}
	printf("\\");

	printf("\n\n");
}