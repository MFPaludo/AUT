#include <stdio.h>

int main()
{
	int number_1;
	printf("Please enter number 1: ");
	scanf("%i", &number_1);

	int number_2;
	printf("Please enter number 2: ");
	scanf("%i", &number_2);

	int number_3;
	printf("Please enter number 3: ");
	scanf("%d", &number_3);

	printf("\nYour numbers in entry order: \n%i\n%i\n%i\n\n", number_1, number_2, number_3); //number in order
	printf("Your numbers reversed:\n%i\n%i\n%i\n\n", number_3, number_2, number_1); //numbers reversed

	return 0;
}