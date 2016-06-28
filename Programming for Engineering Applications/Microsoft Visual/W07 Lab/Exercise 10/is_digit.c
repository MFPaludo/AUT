#include <stdio.h>

int is_digit(char character)
{
	if (character >= 48 && character <= 57)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}