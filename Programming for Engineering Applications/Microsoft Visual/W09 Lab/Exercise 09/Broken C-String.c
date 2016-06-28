#include <stdio.h>

int main()
{
	char* input = 0;

	input = (char*)malloc(sizeof(char) * 100);

	printf("Enter your name: ");

	scanf("%99s", input);

	printf("Your name is %s.\n", input);

	return 0;
}