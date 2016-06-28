#include <stdio.h>

void draw_ascii_box(char horizontal, char vertical, char corner, int width, int height);

int main()
{
	char horizontal;
	printf("Horizontal character: ");
	scanf(" %c", &horizontal);

	char vertical;
	printf("Vertical character: ");
	scanf(" %c", &vertical);

	char corner;
	printf("Corner character: ");
	scanf(" %c", &corner);

	int width;
	printf("Width: ");
	scanf("%d", &width);

	int height;
	printf("Height: ");
	scanf("%d", &height);

	draw_ascii_box(horizontal, vertical, corner, width, height);
}