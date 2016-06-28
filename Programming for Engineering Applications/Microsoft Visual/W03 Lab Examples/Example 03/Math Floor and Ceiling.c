#include <stdio.h>
#include <math.h>

int main()
{
	float x = 0.0f;

	printf("Enter a real number: ");
	scanf("%f", &x);

	double x_floored = floor(x);
	double x_ceiling = ceil(x);

	printf("\n%f rounded down is %f\n", x, x_floored);
	printf("%f rounded up is %f\n", x, x_ceiling);
	
	return 0;
}