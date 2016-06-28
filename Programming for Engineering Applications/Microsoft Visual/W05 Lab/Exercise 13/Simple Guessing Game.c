#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number = (rand() % 10) + 1;

	printf("I'm thinking of a number between 1 and 10...\n");
	printf("You have three chances to guess the number...");
	printf("\n\n");

	int guess;
	printf("What is your first guess? ");
	scanf("%d", &guess);

	if (guess == number)
	{
		printf("Correct!");
		printf("\n\n");
		printf("Well done, %d was my number! You took one guess!", number);
	}
	else
	{
		printf("Incorrect!");
		printf("\n\n");

		printf("What is your second guess? ");
		scanf("%d", &guess);
		if (guess == number)
		{
			printf("Correct!");
			printf("\n\n");
			printf("Well done, %d was my number! You took one guess!", number);
		}
		else
		{
			printf("Incorrect!");
			printf("\n\n");

			printf("What is your third guess? ");
			scanf("%d", &guess);
			if (guess == number)
			{
				printf("Correct!");
				printf("\n\n");
				printf("Well done, %d was my number! You took one guess!", number);
			}
			else
			{
				printf("Incorrect!");
				printf("\n\n");
				printf("You could not guess my number! It was %d.", number);
			}
		}
	}


	printf("\n\n");

	return 0;
}