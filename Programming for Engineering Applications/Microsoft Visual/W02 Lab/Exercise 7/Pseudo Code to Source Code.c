#include <stdio.h>
#include <math.h>

int main()
{
	int x;
	printf("Enter the x value: ");
	scanf("%d", &x);
	printf("\n\n");

	int y;
	printf("Enter the y value: ");
	scanf("%d", &y);
	printf("\n\n");

	float a = x * y;
	float b = x + y;
	float c = pow(b, 2) + a * (b - x) * (a + y);

	printf("Result: %f", c);
	printf("\n\n");

	return 0;
}