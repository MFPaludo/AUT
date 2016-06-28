#include <stdio.h>

int main()
{
	char character;
	printf("Input a character: ");
	scanf("%c", &character);

	if (character <= 31 || character == 127)
	{
		printf("Input is non-printable.");
	}
	else if (character == 32)
	{
		printf("Input is space.");
	}
	else if (character >= 48 && character <= 57)
	{
		printf("Input is digit.");
	}
	else if (character >= 65 && character <= 90)
	{
		printf("Input is uppercase.");
	}
	else if (character >= 97 && character <= 122)
	{
		printf("Input is lowercase.");
	}
	else if ((character >= 33 && character <= 47) || (character >= 58 && character <= 64) || (character >= 91 && character <= 96) || (character >= 123 && character <= 126))
	{
		printf("Input is symbol.");
	}

	printf("\n\n");

	return 0;
}