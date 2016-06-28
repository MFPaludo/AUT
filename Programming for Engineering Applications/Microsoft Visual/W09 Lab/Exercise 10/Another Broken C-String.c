#include <stdio.h>

int main()
{
	char* input = 0;

	input = (char*)malloc(sizeof(char) * 256);

	printf("Enter your name: ");

	scanf("%255s", input);

	printf("Your name is %s.\n", input);

	return 0;
}