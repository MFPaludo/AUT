#include <stdio.h>

int main()
{
	printf("Please input two whole numbers:\n");
	
	int a;
	scanf("%d", &a);

	int b;
	scanf("%d", &b);

	printf("\n");

	int min_result = find_minimum(a, b);
	printf("The minimum is: %d", min_result);

	printf("\n\n");

	return 0;
}