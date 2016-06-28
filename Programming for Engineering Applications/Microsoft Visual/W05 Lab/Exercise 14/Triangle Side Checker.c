#include <stdio.h>

int main()
{
	int first;
	printf("Enter the first side length: ");
	scanf("%d", &first);

	int second;
	printf("Enter the second side length: ");
	scanf("%d", &second);

	int third;
	printf("Enter the third side length: ");
	scanf("%d", &third);

	printf("\n");

	if (first == second && second == third)
	{
		printf("This is an equilateral triangle.");
	}
	else if (first == second || first == third || second == third)
	{
		printf("This is an isosceles triangle.");
	}
	else
	{
		printf("This is a scalene triangle.");
	}

	printf("\n\n");

	return 0;
}