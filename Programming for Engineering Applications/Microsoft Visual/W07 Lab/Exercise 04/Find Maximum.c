#include <stdio.h>

float find_maximum(float a, float b, float c);

int main()
{
	printf("Enter three real numbers\n");

	float a;
	scanf("%f", &a);

	float b;
	scanf("%f", &b);

	float c;
	scanf("%f", &c);

	printf("\n");

	float max_result = find_maximum(a, b, c);
	printf("The maximum is: %f", max_result);

	printf("\n\n");

	return 0;
}