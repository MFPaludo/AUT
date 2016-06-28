#include <stdio.h>

void print_quadratic(int a, int b, int c);

int main()
{
	int a;
	printf("Enter a: ");
	scanf("%d", &a);

	int b;
	printf("Enter b: ");
	scanf("%d", &b);

	int c;
	printf("Enter c: ");
	scanf("%d", &c);
	
	printf("\n\n");

	print_quadratic(a, b, c);

	printf("\n\n");

	return 0;
}