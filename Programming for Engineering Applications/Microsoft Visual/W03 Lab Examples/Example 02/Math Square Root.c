#include <stdio.h>
#include <math.h>

int main()
{
	float x = 0.0f;

	printf("Square Root Calculator:\n\n");

	printf("Enter a value to square root: ");
	scanf("%f", &x);

	double result = sqrt(x);

	printf("\nThe square root of %f is %f\n", x, result);
	
	return 0;
}