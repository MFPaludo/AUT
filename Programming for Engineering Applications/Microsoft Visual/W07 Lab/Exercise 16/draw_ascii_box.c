#include <stdio.h>

void draw_ascii_box(char horizontal, char vertical, char corner, int width, int height)
{
	for (int a = height; a > 0; a--)
	{
		if (a == height || a == 1)
		{
			for (int b = width; b > 0; b--)
			{
				if (b == width || b == 1)
				{
					printf("%c", corner);
				}
				else
				{
					printf("%c", horizontal);
				}
			}
			printf("\n");
		}
		else
		{
			for (int c = width; c > 0; c--)
			{
				if (c == width || c == 1)
				{
					printf("%c", vertical);
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
}