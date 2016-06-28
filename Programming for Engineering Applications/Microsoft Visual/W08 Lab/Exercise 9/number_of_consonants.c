#include <stdio.h>
#include <string.h>

int number_of_consonants(char* c_string)
{
	int consonant = 0;

	for (int i = 0; i < strlen(c_string); i++)
	{
		if ((c_string[i] >= 66 && c_string[i] <= 68) || (c_string[i] >= 70 && c_string[i] <= 72) || (c_string[i] >= 74 && c_string[i] <= 78) || (c_string[i] >= 80 && c_string[i] <= 84) || (c_string[i] >= 86 && c_string[i] <= 90) || (c_string[i] >= 98 && c_string[i] <= 100) || (c_string[i] >= 102 && c_string[i] <= 104) || (c_string[i] >= 106 && c_string[i] <= 110) || (c_string[i] >= 112 && c_string[i] <= 116) || (c_string[i] >= 118 && c_string[i] <= 122))
		{
			consonant++;
		}
	}

	return consonant;
}