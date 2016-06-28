#include <stdio.h>

void wait_for_enter()
{
	char input = 0;
	scanf("%c", &input);
}

void print_welcome()
{
	printf("--------------------------------------\n");
	printf("Welcome to the Function Demonstration!\n");
	printf("--------------------------------------\n");
}

void print_goodbye()
{
	printf("+---------+\n");
	printf("| Goodbye |\n");
	printf("+---------+\n");
}

void print_prompt()
{
	printf("\nPress Enter to continue...\n");
}

int main()
{
	print_welcome();

	print_prompt();

	wait_for_enter();

	print_goodbye();

	return 0;
}