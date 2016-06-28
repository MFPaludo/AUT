#include <stdio.h>

int main()
{
	printf("Welcome to Tic-Tac-Toe!\n");
	printf("-----------------------");

	printf("\n\n");

	printf("Player 'X' goes first!");

	printf("\n\n");

	int input;
	int counter = 1;
	char position[10] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

	do
	{
		printf("     |     |     \n");
		printf("  %c  |  %c  |  %c  \n", position[0], position[1], position[2]);
		printf("     |     |     \n");
		printf("-----+-----+-----\n");
		printf("     |     |     \n");
		printf("  %c  |  %c  |  %c  \n", position[3], position[4], position[5]);
		printf("     |     |     \n");
		printf("-----+-----+-----\n");
		printf("     |     |     \n");
		printf("  %c  |  %c  |  %c  \n", position[6], position[7], position[8]);
		printf("     |     |     ");

		printf("\n\n");

		if (counter % 2)
		{
			printf("Where would player 'X' like to go? ");
			scanf("%d", &input);

			while (position[input - 1] == 'O' || position[input - 1] == 'X')
			{
				printf("Position already taken!\n");
				printf("Where would player 'X' like to go? ");
				scanf("%d", &input);
			} 
			
			position[input - 1] = 'X';

			counter++;
		}
		else
		{
			printf("Where would player 'O' like to go? ");
			scanf("%d", &input);

			while (position[input - 1] == 'O' || position[input - 1] == 'X')
			{
				printf("Position already taken!\n");
				printf("Where would player 'O' like to go? ");
				scanf("%d", &input);
			}

			position[input - 1] = 'O';

			counter++;
		}

		printf("\n");
	} 
	while ((position[0] != position[1] || position[1] != position[2]) && (position[3] != position[4] || position[4] != position[5]) && (position[6] != position[7] || position[7] != position[8]) && (position[0] != position[3] || position[3] != position[6]) && (position[1] != position[4] || position[4] != position[7]) && (position[2] != position[5] || position[5] != position[8]) && (position[0] != position[4] || position[4] != position[8]) && (position[2] != position[4] || position[4] != position[6]) && (counter <= 9));

	printf("\n");

	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", position[0], position[1], position[2]);
	printf("     |     |     \n");
	printf("-----+-----+-----\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", position[3], position[4], position[5]);
	printf("     |     |     \n");
	printf("-----+-----+-----\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", position[6], position[7], position[8]);
	printf("     |     |     ");

	printf("\n\n");

	if ((position[0] == position[1] && position[1] == position[2] && position[0] == 'X') || (position[3] == position[4] && position[4] == position[5] && position[3] == 'X') || (position[6] == position[7] && position[7] == position[8] && position[6] == 'X') || (position[0] == position[3] && position[3] == position[6] && position[0] == 'X') || (position[1] == position[4] && position[4] == position[7] && position[1] == 'X') || (position[2] == position[5] && position[5] == position[8] && position[2] == 'X') || (position[0] == position[4] && position[4] == position[8] && position[0] == 'X') || (position[2] == position[4] && position[4] == position[6] && position[2] == 'X'))
	{
		printf("Game Over! Player 'X' wins!");
	}
	else if ((position[0] == position[1] && position[1] == position[2] && position[0] == 'O') || (position[3] == position[4] && position[4] == position[5] && position[3] == 'O') || (position[6] == position[7] && position[7] == position[8] && position[6] == 'O') || (position[0] == position[3] && position[3] == position[6] && position[0] == 'O') || (position[1] == position[4] && position[4] == position[7] && position[1] == 'O') || (position[2] == position[5] && position[5] == position[8] && position[2] == 'O') || (position[0] == position[4] && position[4] == position[8] && position[0] == 'O') || (position[2] == position[4] && position[4] == position[6] && position[2] == 'O'))
	{
		printf("Game Over! Player 'O' wins!");
	}
	else
	{
		printf("Game Over! Draw!");
	}
	
	printf("\n\n");

	return 0;
}