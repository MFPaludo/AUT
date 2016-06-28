#include <stdio.h>
#include <math.h>

int main()
{
	float x;
	printf("Input the first number:");
	scanf("%f", &x);

	float y;
	printf("Input the second number:");
	scanf("%f", &y);
	printf("\n\n");

	float sum = x + y;
	printf("The sum is: %f\n", sum);

	float average = sum / 2;
	printf("The average is: %f\n", average);

	float square_sum = pow(x, 2) + pow(y, 2);
	printf("The sum of the squares of the numbers is: %f", square_sum);

	printf("\n\n");
	return 0;
}