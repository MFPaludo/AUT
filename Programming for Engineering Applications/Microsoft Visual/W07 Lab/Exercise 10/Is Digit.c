#include <stdio.h>

int is_digit(char character);

int main()
{
	char character;
	printf("Enter a character: ");
	scanf("%c", &character);

	int result = is_digit(character);
	printf("The result is: %d", result);

	printf("\n\n");

	return 0;
}