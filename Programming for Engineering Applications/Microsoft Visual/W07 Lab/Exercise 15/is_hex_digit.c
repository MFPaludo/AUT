#include <stdio.h>

int is_hex_digit(int character)
{
	if ((character >= 48 && character <= 57) || (character >= 65 && character <= 70))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}