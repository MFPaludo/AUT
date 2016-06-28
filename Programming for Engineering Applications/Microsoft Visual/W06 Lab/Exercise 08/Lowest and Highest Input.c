#include <stdio.h>

int main()
{
	int number;
	printf("Enter a number (0 to stop):");
	scanf("%d", &number);
	
	int lowest = number;
	int highest = number;
	
	while (number != 0)
	{
		printf("Enter a number (0 to stop):");
		scanf("%d", &number);

		if (number > highest)
		{
			highest = number;
		}
		else if (number < lowest && number != 0)
		{
		lowest = number;
		}
	}

	printf("\n");

	printf("The lowest number entered was: %d", lowest);
	printf("\n\n");

	printf("The highest number entered was: %d", highest);
	printf("\n\n");

	return 0;
}