#include <stdio.h>
#include <math.h>

int main()
{
	printf("Circle Calculator:\n");
	printf("******************");
	printf("\n\n");

	float radius;
	printf("Please enter the radius of a circle: ");
	scanf("%f", &radius);
	printf("\n\n");

	printf("Calculating...");
	printf("\n\n");

	float area = 3.14159f * pow(radius, 2);
	float circumference = 2 * 3.14159f * radius;

	printf("A circle with radius %f has:", radius);
	printf("\n\n");
	printf("	-An area of: %f\n", area);
	printf("	-A circumference of: %f", circumference);
	printf("\n\n");

	radius = 2 * radius;
	area = 3.14159f * pow(radius, 2);
	circumference = 2 * 3.14159f * radius;

	printf("Also, did you know a circle with radius %f has:", radius);
	printf("\n\n");
	printf("	-An area of: %f\n", area);
	printf("	-A circumference of: %f", circumference);

	printf("\n\n");
	return 0;
}