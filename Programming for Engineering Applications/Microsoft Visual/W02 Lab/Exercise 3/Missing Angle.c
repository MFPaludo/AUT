#include <stdio.h>
#include <math.h>

int main()
{
	printf("A triangle has three internal angles...");
	printf("\n\n");

	int first_angle;
	printf("Please enter the first angle: ");
	scanf("%d", &first_angle);

	int second_angle;
	printf("Please enter the second angle: ");
	scanf("%d", &second_angle);

	printf("\n\n");
	printf("Calculating...");
	printf("\n\n");

	while (first_angle + second_angle >= 180)
	{
		printf("I'm sorry Dave, I'm afraid I can't do that. Please, user, enter the numbers again.");
		printf("\n\n");
		printf("Please enter the first angle: ");
		scanf("%d", &first_angle);
		printf("Please enter the second angle: ");
		scanf("%d", &second_angle);
		printf("\n\n");
		printf("Calculating...");
		printf("\n\n");
	}

	int third_angle = 180 - first_angle - second_angle;
	printf("The third angle is: %d", third_angle);
	printf("\n\n");

	return 0;
}