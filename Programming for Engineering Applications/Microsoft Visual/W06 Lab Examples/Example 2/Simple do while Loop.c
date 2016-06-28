#include <stdio.h>

int main()
{
	int counter = 10;

	do
	{
		printf("%d, ", counter);

		--counter;
	} 
	while (counter > 0);

	return 0;
}