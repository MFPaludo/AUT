#include <stdio.h>

void convert_to_lowercase(char char_array[]);

void convert_to_lowercase(char* char_array)
{
	for (int i = 0; char_array[i] != '\0'; i++)
	{
		if (char_array[i] >= 65 && char_array[i] <= 90)
		{
			char_array[i] += 32;
		}
	}
}

int main()
{
	char name[21];
	printf("Please enter your name: ");
	scanf(" %21s", &name);

	convert_to_lowercase(&name);

	printf("%s", name);

	printf("\n\n");

	return 0;
}