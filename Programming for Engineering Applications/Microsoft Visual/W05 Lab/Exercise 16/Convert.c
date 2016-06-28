#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long convert_method(char hex[])
{
	char *hex_string = hex;
	static int LENGTH = 2;
	static const int BASE = 16;
	unsigned long decimal_number = 0;

	for (int i = 0; i < LENGTH; i++, hex_string++)
	{
		if (*hex_string >= 48 && *hex_string <= 57)
		{
			decimal_number += (((int)(*hex_string)) - 48) * pow(BASE, LENGTH - i - 1);
		}
		else if (*hex_string >= 65 && *hex_string <= 70)
		{
			decimal_number += (((int)(*hex_string)) - 55) * pow(BASE, LENGTH - i - 1);
		}
	}
	return decimal_number;
}