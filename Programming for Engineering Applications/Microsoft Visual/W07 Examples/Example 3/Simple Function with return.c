#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int main()
{
	int x = 0;
	int y = 0;

	do
	{
		printf("x? ");
		scanf("%d", &x);

		printf("y? ");
		scanf("%d", &y);

		int result = add(x, y);

		printf("%d + %d is %d\n", x, y, result);
	} 
	while (!(0 == x || 0 == y));

	return 0;
}