#include <stdio.h>
#include <math.h>

int main()
{
	float x = 0.0f;
	float y = 0.0f;

	printf("Power Calculator: x ^ y\n\n");

	printf("Enter a value for x: ");
	scanf("%f", &x);
	printf("Enter a value for y: ");
	scanf("%f", &y);

	double result = pow(x, y);

	printf("\n%f ^ %f is %f\n", x, y, result);

	return 0;
}