#include <stdio.h>

int main()
{
	char temperature;
	printf("Is the temperature warm or cold (w/c)? ");
	scanf("%c", &temperature);

	char sacrifice;
	scanf("%c", &sacrifice);

	char humidity;
	printf("Is it dry of humid (d/h)? ");
	scanf("%c", &humidity);

	printf("\n");
	
	if (temperature == 'w')
	{
		if (humidity == 'd')
		{
			printf("You should play tennis.");
		}
		else if (humidity == 'h')
		{
			printf("You should go swimming.");
		}
		else
		{
			printf("I'm sorry Dave, I'm afraid I can't do that.");
		}
	}
	else if (temperature == 'c')
	{
		if (humidity == 'd')
		{
			printf("You should study Programming 1.");
		}
		else if (humidity == 'h')
		{
			printf("You should read a book.");
		}
		else
		{
			printf("I'm sorry Dave, I'm afraid I can't do that.");
		}
	}
	else
	{
		printf("I'm sorry Dave, I'm afraid I can't do that.");
	}

	printf("\n\n");

	return 0;
}