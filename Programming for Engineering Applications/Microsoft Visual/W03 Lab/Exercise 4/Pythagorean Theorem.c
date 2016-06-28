#include <stdio.h>
#include <math.h>

int main()
{
	float adjacent;
	printf("Enter the length of the adjacent side: ");
	scanf("%f", &adjacent);

	float opposite;
	printf("Enter the length of the opposite side: ");
	scanf("%f", &opposite);

	float hypotenuse = pow(((pow(adjacent, 2)) + (pow(opposite, 2))), (1.0 / 2));
	printf("The hypotenuse is %f in length.", hypotenuse);
	printf("\n\n");

	printf("          +\n");
	printf("          |\\\n");
	printf("          | \\\n");
	printf("%f  |  \\  %f\n", adjacent, opposite);
	printf("          |   \\\n");
	printf("          |    \\\n");
	printf("          +-----+\n");
	printf("          %f\n", hypotenuse);
	printf("\n\n");

	printf("Note: Right-angle triangle is not drawn to scale!");

	printf("\n\n");
	return 0;
}