#include <stdio.h>

int get_user_choice();

int main()
{
	int choice = get_user_choice();
	printf("Your choice was: %d", choice);

	printf("\n\n");

	return 0;
}