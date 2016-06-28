#include <stdio.h>
#include<math.h>

int main()
{
	float x;
	printf("Enter the x value: ");
	scanf("%f", &x);
	printf("\n\n");

	float r1 = pow(x, 2);
	float r2 = 3 * r1;
	float r3 = 6 * x;
	float y = r2 - r3 + 5;

	printf("The value of y = 3x^2 - 6x + 5 is: %f", y);

	printf("\n\n");
	return 0;
}