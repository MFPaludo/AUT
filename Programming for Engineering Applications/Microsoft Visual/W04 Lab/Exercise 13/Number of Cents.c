#include <stdio.h>
#include<math.h>

int main()
{
	int cents;
	printf("Enter the number of cents: ");
	scanf("%d", &cents);
	printf("\n\n");

	int dollars = cents / 100;
	int cents_result = cents % 100;

	printf("%d dollars and %d cents", dollars, cents_result);

	printf("\n\n");
	return 0;
}