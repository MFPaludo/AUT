#include <stdio.h>

int main()
{
	int a = 3;

	printf("a is currently %d. \n", a);

	a += 5;
	printf("a is currently %d. \n", a);

	a *= 5;
	printf("a is currently %d. \n", a);

	a -= 5;
	printf("a is currently %d. \n", a);

	a /= 5;
	printf("a is currently %d. \n", a);

	return 0;
}