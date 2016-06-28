#include <stdio.h>

int paper_scissor_rock(int input);

int main()
{
	int input;

	int win = 0;
	int lost = 0;
	int draw = 0;

	printf("Welcome to the Paper, Scissors, Rock game :D");
	printf("\n\n");

	do
	{
		printf("[1] Paper\n");
		printf("[2] Scissor\n");
		printf("[3] Rock\n");
		printf("[0] Exit\n");
		scanf("%d", &input);

		printf("\n");

		if (input != 0)
		{
			input = paper_scissor_rock(input);

			if (input == 1)
			{
				win++;
			}
			else if (input == 2)
			{
				lost++;
			}
			else
			{
				draw++;
			}

			printf("--------------------------------------------");
			printf("\n\n");
		}
	} 
	while (input != 0);

	printf("--------------------------------------------");
	printf("\n\n");

	if (win > lost)
	{
		printf(" +--------+\n");
		printf(" |YOU WIN!|\n");
		printf(" +--------+\n");
	}
	else if (lost > win)
	{
		printf(" +----------+\n");
		printf(" |GAME OVER!|\n");
		printf(" +----------+\n");
	}
	else
	{
		printf(" +-----+\n");
		printf(" |DRAW!|\n");
		printf(" +-----+\n");
	}

	printf("\n\n");

	printf("The game had:\n");
	printf("WIN: %d\n", win);
	printf("LOST: %d\n", lost);
	printf("DRAW: %d\n", draw);

	printf("\n\n");

	return 0;
}