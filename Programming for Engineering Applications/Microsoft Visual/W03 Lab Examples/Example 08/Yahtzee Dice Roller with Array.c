#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));

	int dice[5];

	// Roll five Yahtzee (Milton Bradley, 1973) dice:
	dice[0] = (rand() % 6) + 1;
	dice[1] = (rand() % 6) + 1;
	dice[2] = (rand() % 6) + 1;
	dice[3] = (rand() % 6) + 1;
	dice[4] = (rand() % 6) + 1;

	// Simple output:
	printf("First dice : %d\n", dice[0]);
	printf("Second dice : %d\n", dice[1]);
	printf("Third dice : %d\n", dice[2]);
	printf("Fourth dice : %d\n", dice[3]);
	printf("Fifth dice : %d\n", dice[4]);
	printf("\n");

	// Fancy output:
	printf("+---+ +---+ +---+ +---+ +---+\n");
	printf("| %d | | %d | ", dice[0], dice[1]);
	printf("| %d | | %d | ", dice[2], dice[3]);
	printf("| %d |\n", dice[4]);
	printf("+---+ +---+ +---+ +---+ +---+\n");
	
	return 0;
}