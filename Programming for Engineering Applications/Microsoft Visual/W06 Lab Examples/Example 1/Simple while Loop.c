#include <stdio.h>

int main()
{
	int counter = 0;

	while (counter < 10)
	{
		printf("%d... \n", counter);

		++counter;
	}

	return 0;
}