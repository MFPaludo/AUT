#include <stdio.h>

int is_vowel(char character)
{
	if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' || character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}