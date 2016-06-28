#include <stdio.h>

int main()
{
	int base;
	printf("Enter the base: ");
	scanf("%d", &base);

	int pow;
	printf("Enter the power: ");
	scanf("%d", &pow);

	printf("\n");

	printf("%d ^ %d is the same as...", base, pow);
	printf("\n\n");

	printf("%d ", base);

	int result = base;

	for (int i = 1; i < pow; i++)
	{
		printf("* %d ", base);
		result = result * base;
	}

	printf(" which is %d", result);

	printf("\n\n");

	return 0;
}