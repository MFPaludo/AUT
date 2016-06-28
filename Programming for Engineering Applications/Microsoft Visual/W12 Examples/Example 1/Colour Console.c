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

void move_cursor_to(int column, int row)
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

	COORD position;
	position.X = column;
	position.Y = row;

	SetConsoleCursorPosition(console, position);
}

int main()
{
	int colour = WHITE;
	int row = 23;
	int column = 76;

	srand((unsigned int)time(0));

	while (1)
	{
		for (row = 23; row > 0; --row)
		{
			move_cursor_to(column, row);

			set_text_colour(colour, colour);

			printf(" ");

			Sleep(1);

			--colour;

			if (colour <= 0)
			{
				colour = WHITE;
			}
		}

		column -= 4;

		if (column < 0)
		{
			column = 76;
		}
	}

	return 0;
}