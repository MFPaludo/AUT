#include <stdio.h>

int roll_dice(int* address1, int* address2);

int main()
{
	printf("main: Week8: Pass by Reference, with pointers\n");
	printf("main: Starting main function:\n");

	int dice1 = 0;
	printf("main: variable dice1 holds the value: %d\n", dice1);
	printf("main: variable dice1 stored at: %d\n", &dice1);

	int dice2 = 0;
	printf("main: variable dice2 holds the value: %d\n", dice2);
	printf("main: variable dice2 stored at: %d\n", &dice2);

	printf("main: calling: roll dice(%d, %d)\n", &dice1, &dice2);
	int total_roll = roll_dice(&dice1, &dice2);

	printf("main: variable dice1 holds the value: %d\n", dice1);
	printf("main: variable dice1 stored at: %d\n", &dice1);

	printf("main: variable dice2 holds the value: %d\n", dice2);
	printf("main: variable dice2 stored at: %d\n", &dice2);

	printf("main: variable total_roll holds the value: %d\n", total_roll);
	printf("main: variable total_roll stored at: %d\n", &total_roll);

	printf("main: Returning zero to the operating system...");

	printf("\n\n");

	return 0;
}