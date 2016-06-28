#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));

	int d20_1 = (rand() % 20) + 1;
	int d20_2 = (rand() % 20) + 1;

	printf("D20 Dice Roller:\n");
	printf("--==--==--==--==");
	printf("\n\n");

	printf("The first dice rolls the value: %d", d20_1);
	
	printf("\n\n");
	printf("Then...");
	printf("\n\n");

	printf("The second dice rolls the value: %d", d20_2);

	printf("\n\n");
	return 0;
}