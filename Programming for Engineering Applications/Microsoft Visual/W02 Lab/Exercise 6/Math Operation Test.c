#include <stdio.h>
#include <math.h>

int main()
{
	printf("Math Operation Test:\n");
	printf("--------------------");
	printf("\n\n");

	int first_number;
	printf("Please enter the first whole number: ");
	scanf("%d", &first_number);

	int second_number;
	printf("Please enter the second whole number: ");
	scanf("%d", &second_number);

	printf("\n\n");
	printf("Calculating...");
	printf("\n\n");

	int x = first_number + second_number;
	printf("%d + %d is %d", first_number, second_number, x);
	printf("\n\n");

	int y = first_number - second_number;
	printf("%d - %d is %d", first_number, second_number, y);
	printf("\n\n");

	int z = first_number * second_number;
	printf("%d * %d is %d", first_number, second_number, z);
	printf("\n\n");

	printf("With integer division:");
	printf("\n\n");

	int m = first_number / second_number;
	printf("%d / %d is %d", first_number, second_number, m);
	printf("\n\n");

	printf("With floating point division:");
	printf("\n\n");

	float n = first_number / (float)second_number;
	printf("%d / %d is %f", first_number, second_number, n);
	printf("\n\n");

	int o = first_number % second_number;
	printf("The remainder of %d divided by %d is %d", first_number, second_number, o);
	printf("\n\n");

	return 0;
}