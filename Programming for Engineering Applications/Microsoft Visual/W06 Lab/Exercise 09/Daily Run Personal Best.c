#include <stdio.h>

int main()
{
	printf("Enter your daily run time in minutes.");
	printf("\n\n");

	int time;
	printf("Day 1: ");
	scanf("%d", &time);

	int best = time;

	for (int i = 2; i <= 7; i++)
	{
		printf("Day %d: ", i);
		scanf("%d", &time);

		if (time < best)
		{
			best = time;
		}
	}

	printf("\n");

	printf("Your best time this week was %d minutes.", best);

	printf("\n\n");

	return 0;
}