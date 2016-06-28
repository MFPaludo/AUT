#include <Windows.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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

void set_text_colour(int foreground_colour, int background_colour)
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	int colour = ((background_colour & 0x0F) << 4) | (foreground_colour & 0x0F);
	SetConsoleTextAttribute(console, colour);
}