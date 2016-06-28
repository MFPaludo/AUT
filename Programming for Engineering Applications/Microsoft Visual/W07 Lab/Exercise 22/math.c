#include <stdio.h>

int math(int guess, int minimum, int maximum)
{
	guess = (maximum - minimum) / 2 + minimum;

	return guess;
}