#include <stdio.h>
#include <string.h>
#include <ctype.h>

void to_lowercase(char* c_string)
{
	for (int i = 0; i < strlen(c_string); i++)
	{
		putchar(tolower(c_string[i]));
	}
}