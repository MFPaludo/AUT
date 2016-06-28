#include <stdio.h>

int get_user_choice()
{
	int choice;
	printf("Enter your choice: ");
	scanf("%d", &choice);

	return choice;
}