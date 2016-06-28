#include <stdio.h>

int main()
{
	int sum = 0;
	int count = 0;

	while (1)
	{
		int input = 0;

		printf("Enter a whole number (0 to stop): ");
		scanf("%d", &input);

		if (0 == input)
		{
			break;
		}

		sum += input;
		++count;

		printf("Running total is %d.\n", sum);
	}

	printf("\nTotal is %d.\n", sum);

	float real_sum = sum;
	float average = real_sum / count;

	printf("Average is %f.\n", average);

	return 0;
}