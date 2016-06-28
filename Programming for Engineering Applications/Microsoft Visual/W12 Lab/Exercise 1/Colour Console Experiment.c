#include <stdio.h>
#include "Functions.h"

enum Colours
{
	BLACK = 0,
	BLUE = 1,
	GREEN = 2,
	CYAN = 3,
	RED = 4,
	MAGENTA = 5,
	BROWN = 6,
	LIGHTGRAY = 7,
	DARKGRAY = 8,
	LIGHTBLUE = 9,
	LIGHTGREEN = 10,
	LIGHTCYAN = 11,
	LIGHTRED = 12,
	LIGHTMAGENTA = 13,
	YELLOW = 14,
	WHITE = 15
};

int main()
{
	int foreground_colour = LIGHTRED;
	int background_colour = BLUE;

	set_text_colour(foreground_colour, background_colour);

	printf("             + \n", 92);
	printf("            /| \n", 92);
	printf("           / |+ \n", 92);
	printf("          /  ||%c \n", 92);
	printf("         /   || %c \n", 92);
	printf("        /    ||  %c \n", 92);
	printf("       /     ||   %c \n", 92);
	printf("       +-----++----+ \n");
	printf("    _________%c|_________ \n", 37);
	printf("    %c    THE DRAGONBORN/ \n", 92);
	printf("%c%c%c%c%c%c________________/%c%c%c%c%c \n", 126, 126, 126, 126, 126, 92, 126, 126, 126, 126, 126);
	return 0;
}