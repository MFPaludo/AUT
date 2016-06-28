#include <stdio.h>

int to_upper(int character);

int main()
{
	char character;
	printf("Enter a lowercase letter: ");
	scanf("%c", &character);

	character = to_upper(character);
	printf("%c", character);

	printf("\n\n");

	return 0;
}