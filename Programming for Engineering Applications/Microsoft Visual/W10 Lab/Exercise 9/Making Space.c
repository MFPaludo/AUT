#include <stdio.h>

void insert_space(char* string, int place, int spaces);

void insert_space(char* string, int place, int spaces)
{
	char temporary[100] = string;
	
	for (int i = place; i < place + spaces; i++)
	{
		string[i] = ' ';
	}

	for (int i = place + spaces + 1; temporary[i] != '\n'; i++)
	{
		string[i] = temporary[i - place - spaces - 1];
	}
}

int main()
{
	char string[] = "helloworld";
	insert_space(string, 5, 3);

	printf("%s", string);

	printf("\n\n");

	return 0;
}