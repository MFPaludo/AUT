#include <stdio.h>
#include <math.h>

int main()
{
	printf("Please enter five whole numbers:");
	printf("\n\n");

	int first_number;
	printf("First number: ");
	scanf("%d", &first_number);

	int second_number;
	printf("Second number: ");
	scanf("%d", &second_number);

	int third_number;
	printf("Third number: ");
	scanf("%d", &third_number);

	int fourth_number;
	printf("Fourth number: ");
	scanf("%d", &fourth_number);

	int fifth_number;
	printf("Fifth number: ");
	scanf("%d", &fifth_number);

	printf("\n\n");

	double sum = first_number + second_number + third_number + fourth_number + fifth_number;
	double average = sum / 5;
	printf("The average of these five numbers is: %f", average);
	printf("\n\n");

	return 0;
}