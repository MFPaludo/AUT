#include <stdio.h>

int main()
{
	int number1;
	int number2;

	printf("Enter a number: ");
	scanf("%d", &number1);

	printf("Enter another number: ");
	scanf("%d", &number2);

	int sum = number1 + number2;
	printf("The sum of these numbers is: %d.\n", sum);

	return 0;
}