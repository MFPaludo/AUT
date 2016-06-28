#include <stdio.h>

int main()
{
	int i = 3;
	int j = 5;
	int k = 6;

	int order1 = i + j * k;
	int order2 = i * j + k;
	int order3 = (i + j) * k;

	int order4 = i + j / k;
	int order5 = i / j + k;
	int order6 = (i + j) / k;

	printf("i is %d, j is %d, k is %d.\n\n", i, j, k);

	printf("i + j * k evaluates to: %d.\n", order1);
	printf("i * j + k evaluates to: %d.\n", order2);
	printf("(i + j) * k evaluates to: %d.\n", order3);

	printf("\n");

	printf("i + j / k evaluates to: %d.\n", order4);
	printf("i / j + k evaluates to: %d.\n", order5);
	printf("(i + j) / k evaluates to: %d.\n", order6);

	return 0;
}