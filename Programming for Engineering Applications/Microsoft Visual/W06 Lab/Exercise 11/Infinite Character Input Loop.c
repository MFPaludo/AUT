#include <stdio.h>

int main()
{
	printf("Press Ctrl-C to quit!\n");
	printf("---------------------");
	printf("\n\n");

	char character;

	while (1)
	{
		printf("Enter a character: ");
		scanf(" %c", &character);

		if (character >= 48 && character <= 57)
		{
			printf("[%c] digit", character);
			printf("\n\n");
		}
		else if (character >= 97 && character <= 122)
		{
			printf("[%c] lowercase", character);
			printf("\n\n");
		}
		else if (character >= 65 && character <= 90)
		{
			printf("[%c] uppercase", character);
			printf("\n\n");
		}
		else
		{
			printf("[%c] something else", character);
			printf("\n\n");
		}
	}

	printf("\n\n");

	return 0;
}