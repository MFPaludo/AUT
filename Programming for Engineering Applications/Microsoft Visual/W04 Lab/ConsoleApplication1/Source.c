#include <stdio.h>

int main()
{
	int a = -1;
	int b = -1;

	/*printf("Enter a (any whole number): ");
	scanf("%d", &a);
	printf("Enter b (any whole number): ");
	scanf("%d", &b);*/

	a = !a;

	b = a && b;
	b = !b;

	int c = a || b;

	printf("a is %d \n", a);
	printf("b is %d \n", b);
	printf("c is %d \n", c);
	return 0;
}