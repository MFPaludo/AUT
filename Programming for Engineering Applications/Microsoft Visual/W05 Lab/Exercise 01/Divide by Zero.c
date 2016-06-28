#include <stdio.h>

int main()
{
	float numerator;
	printf("Enter the numerator: ");
	scanf("%f", &numerator);

	float denominator;
	printf("Enter the denominator: ");
	scanf("%f", &denominator);

	printf("\n\n");

	printf("Trying to calculate : %f / %f", numerator, denominator);
	printf("\n\n");

	float result;

	if (denominator != 0)
	{
		result = numerator / denominator;
		
		printf("The result is: %f", result);
	}
	else
	{
		printf("Unable to calculate due to divide by zero!");
	}

	printf("\n\n");
	return 0;
}