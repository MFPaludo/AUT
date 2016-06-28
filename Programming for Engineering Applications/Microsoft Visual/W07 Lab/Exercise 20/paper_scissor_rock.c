#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int paper_scissor_rock(int input)
{
	srand(time(0));

	int machine;

	// Roll five Yahtzee (Milton Bradley, 1973) dice:
	machine = (rand() % 3) + 1;

	// Simple output:
	printf("You choose: %d\n", input);
	printf("The computer choose: %d\n", machine);
	printf("\n");

	// Fancy output:
	printf(" +---+     +---+\n");
	printf(" | %d | VS. | %d |\n", machine, input);
	printf(" +---+     +---+\n");
	printf("Machine    Human");

	printf("\n\n");

	if ((input == 1 && machine == 3) || (input == 2 && machine == 1) || (input == 3 && machine == 2))
	{
		printf("YOU WON!");
		printf("\n\n");
		return 1;
	}
	else if ((machine == 1 && input == 3) || (machine == 2 && input == 1) || (machine == 3 && input == 2))
	{
		printf("YOU LOSE!");
		printf("\n\n");
		return 2;
	}
	else
	{
		printf("DRAW!");
		printf("\n\n");
		return 3;
	}

	return 0;
}
