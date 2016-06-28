#include <stdio.h>
#include <math.h>

int main()
{
	printf("Given a quadratic in the form: ax^2 + bx + c = 0");
	printf("\n\n");

	float a;
	printf("Enter the value of a: ");
	scanf("%f", &a);

	float b;
	printf("Enter the value of b: ");
	scanf("%f", &b);

	float c;
	printf("Enter the value of c: ");
	scanf("%f", &c);

	printf("\n\n");

	printf("Solving the quadratic: ");
	printf("\n\n");

	printf("	%fx^2 + %fx + %f = 0", a, b, c);
	printf("\n\n");

	float discriminant = pow(b, 2) -(4 * a * c);

	float result1;
	float result2;

	if (discriminant > 0)
	{
		result1 = (-b + sqrt(discriminant)) / (2 * a);
		result2 = (-b - sqrt(discriminant)) / (2 * a);

		printf("Two real roots found...");
		printf("\n\n");

		printf("x is: %f: ", result1);
		printf("\n\n");

		printf("Or...");
		printf("\n\n");

		printf("x is: %f", result2);
	}
	else if (discriminant == 0)
	{
		result1 = (-b) / (2 * a);

		printf("One real root found...");
		printf("\n\n");

		printf("x is: %f: ", result1);
		printf("\n\n");
	}
	else if (discriminant < 0)
	{
		result1 = (-b) / (2 * a);
		result2 = sqrt((pow(b, 2) - 4 * a * c) * -1);

		printf("Two complex roots found...");
		printf("\n\n");

		printf("x is: %f + %fi: ", result1, result2);
		printf("\n\n");

		printf("Or...");
		printf("\n\n");

		printf("x is: %f - %fi", result1, result2);
	}

	printf("\n\n");

	return 0;
}