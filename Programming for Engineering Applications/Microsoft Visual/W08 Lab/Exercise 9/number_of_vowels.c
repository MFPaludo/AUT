#include <stdio.h>
#include <string.h>

int number_of_vowels(char* c_string)
{
	int vowel = 0;

	for (int i = 0; i < strlen(c_string); i++)
	{
		if (c_string[i] == 65 || c_string[i] == 69 || c_string[i] == 73 || c_string[i] == 79 || c_string[i] == 85 || c_string[i] == 97 || c_string[i] == 101 || c_string[i] == 105 || c_string[i] == 111 || c_string[i] == 117)
		{
			vowel++;
		}
	}

	return vowel;
}