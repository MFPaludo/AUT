#include <stdio.h>

int main()
{
	int x = 5;

	printf("x is currently %d.\n\n", x);

	printf("++x in statement prints : %d.\n\n", ++x);
	printf("x is currently %d.\n\n", x);

	printf("x++ in statement prints : %d.\n\n", x++);
	printf("x is currently %d.\n\n", x);

	printf("--x in statement prints : %d.\n\n", --x);
	printf("x is currently %d.\n\n", x);

	printf("x-- in statement prints : %d.\n\n", x--);
	printf("x is currently %d.\n\n", x);

	int y = 25 + 34;
	int z = 25 + x + 24;

	printf("x is currently %d.\n\n", x);
	printf("y is currently %d.\n\n", y);
	printf("z is currently %d.\n\n", z);

	y = x;
	x = z;
	z = y;

	printf("x is currently %d.\n\n", x);
	printf("y is currently %d.\n\n", y);
	printf("z is currently %d.\n\n", z);

	return 0;
}