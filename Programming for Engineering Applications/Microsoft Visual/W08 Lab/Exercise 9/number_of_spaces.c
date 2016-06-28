#include <stdio.h>
#include <string.h>

int number_of_spaces(char* c_string)
{
	int spaces = 0;

	for (int i = 0; i < strlen(c_string); i++)
	{
		if (c_string[i] == 255)
		{
			spaces++;
		}
	}

	return spaces;
}