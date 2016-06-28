#include <stdio.h>

int main()
{
	char character[100];
	printf("> ");
	scanf("%99s", character);

	for (int i = 0; i < 100; i++)
	{
		if (character[i] >= 97 && character[i] <= 122)
		{
			character[i] = character[i] - 32;
		}
	}

	printf("%s", character);

	printf("\n\n");

	return 0;
}