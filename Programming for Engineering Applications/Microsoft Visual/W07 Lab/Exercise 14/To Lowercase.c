#include <stdio.h>

int to_lower(int character);

int main()
{
	char character;
	printf("Enter a uppercase letter: ");
	scanf("%c", &character);

	character = to_lower(character);
	printf("%c", character);

	printf("\n\n");

	return 0;
}