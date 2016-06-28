#include <stdio.h>

int is_hex_digit(int character);

int main()
{
	char character;
	printf("Enter a hexadecimal number: ");
	scanf("%c", &character);

	character = is_hex_digit(character);
	printf("%d", character);

	printf("\n\n");

	return 0;
}