#include <stdio.h>

int main()
{
	int size = 5;
	float array[5];

	printf("Please enter five real numbers:");
	printf("\n\n");

	printf("	First number: ");
	scanf("%f", &array[0]);
	printf("\n	Second number: ");
	scanf("%f", &array[1]);
	printf("\n	Third number: ");
	scanf("%f", &array[2]);
	printf("\n	Fourth number: ");
	scanf("%f", &array[3]);
	printf("\n	Fifth number: ");
	scanf("%f", &array[4]);
	printf("\n\n");

	printf("The user entered:");
	printf("\n\n");

	printf("	%f then,\n", array[0]);
	printf("	%f then,\n", array[1]);
	printf("	%f then,\n", array[2]);
	printf("	%f then,\n", array[3]);
	printf("	%f", array[4]);
	printf("\n\n");
	
	float average = 0;
	
	for (size = 4; size >= 0; size--)
	{
		average += array[size];
	}
	
	average /= 5;
	printf("The average of these five numbers is: %f", average);

	printf("\n\n");
	return 0;
}