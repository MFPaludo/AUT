#include <stdio.h>

int main()
{
	float a = 3.5f;

	printf("a is currently %f. \n", a);

	a += 5.1f;
	printf("a is currently %f. \n", a);

	a *= 5.25f;
	printf("a is currently %f. \n", a);

	a -= 5.9f;
	printf("a is currently %f. \n", a);

	a /= 2.0f;
	printf("a is currently %f. \n", a);

	return 0;
}