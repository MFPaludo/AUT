#include <stdio.h>
#include <math.h>

int main()
{
	printf("Rectangle Calculator:\n");
	printf("---------------------");
	printf("\n\n");

	double width;
	printf("What is the width of the rectangle?: ");
	scanf("%lf", &width);

	double height;
	printf("What is the height of the rectangle?: ");
	scanf("%lf", &height);

	printf("\n\n");

	double perimeter = 2 * (width + height);
	double area = width * height;

	printf("The rectangle's perimeter is: %f", perimeter);
	printf("\n");

	printf("The rectangle's area is: %f", area);
	printf("\n\n");

	return 0;
}