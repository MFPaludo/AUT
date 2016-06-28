#include <stdio.h>
#include <stdlib.h>

void check_cheat(char answer, int guess, int minimum, int maximum)
{
	if ((answer == 'l' && guess == minimum + 1) || (answer == 'h' && guess == maximum - 1))
	{
		printf("You are cheating!");

		printf("\n\n");

		exit(1);
	}
}