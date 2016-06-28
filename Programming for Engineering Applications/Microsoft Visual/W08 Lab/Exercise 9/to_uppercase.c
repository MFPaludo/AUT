#include <stdio.h>
#include <string.h>
#include <ctype.h>

void to_uppercase(char* c_string)
{
	for (int i = 0; i < strlen(c_string); i++)
	{
		putchar(toupper(c_string[i]));
	}
}