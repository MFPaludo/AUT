#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(int* address1, int* address2)
{
	printf("roll_dice: Starting roll_dice function!\n");

	printf("roll_dice: variable address1 holds the value: %d\n", address1);
	printf("roll_dice: variable address2 holds the value: %d\n", address2);

	printf("roll_dice: ROLLING TWO DICE!\n");
	srand(time(0));

	printf("roll_dice: Assigning first dice to caller's memory...\n");
	*address1 = (rand() % 6) + 1;

	printf("roll_dice: Assigning second dice to caller's memory...\n");
	*address2 = (rand() % 6) + 1;

	int sum = *address1 + *address2;

	printf("roll_dice: Returning sum of two dice...\n");
	return sum;
}