#include <stdio.h>

int main()
{
	printf("Alphabet Facts!\n");
	printf("^^^^^^^^^^^^^^^");
	printf("\n\n");

	char letter;
	printf("Please input an uppercase letter: ");
	scanf("%c", &letter);
	printf("\n\n");

	int lowercase = letter + 32;
	int letter_before = letter - 1;
	int letter_after = letter + 1;
	int position = letter - 64;

	printf("Some interesting facts:");
	printf("\n\n");

	printf("	1) The lowercase version of the letter is '%c'", lowercase);
	printf("\n\n");

	printf("	2) The letter '%c' comes before '%c' in the alphabet.", letter_before, letter);
	printf("\n\n");

	printf("	3) The letter '%c' comes after '%c' in the alphabet.", letter_after, letter);
	printf("\n\n");

	printf("	4) '%c' is letter number %d in the alphabet!", letter, position);

	printf("\n\n");
	return 0;
}