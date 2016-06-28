#include <stdio.h>

void exchange(float* px, float* py);

int main()
{
	float x = 1;
	float y = 2;

	printf("x = %f\n", x);
	printf("y = %f\n", y);

	printf("\n");
	printf("Swype numbers:");

	exchange(&x, &y);

	printf("\n");
	printf("x = %f\n", x);
	printf("y = %f\n", y);

	printf("\n");

	return 0;
}