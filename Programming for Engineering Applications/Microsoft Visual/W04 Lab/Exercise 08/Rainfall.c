#include <stdio.h>

int main()
{
	float rainfall[3];

	printf("Enter June's rainfall: ");
	scanf("%f", &rainfall[0]);
	printf("Enter July's rainfall: ");
	scanf("%f", &rainfall[1]);
	printf("Enter August's rainfall: ");
	scanf("%f", &rainfall[2]);
	printf("\n\n");

	float sum = rainfall[0] + rainfall[1] + rainfall[2];
	float average = sum / 3;

	printf("The average rainfall is: %f", average);

	printf("\n\n");
	return 0;
}