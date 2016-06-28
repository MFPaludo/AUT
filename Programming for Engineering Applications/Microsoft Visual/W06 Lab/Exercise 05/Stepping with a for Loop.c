#include <stdio.h>

int main()
{
	int starting;
	printf("Starting number:");
	scanf("%d", &starting);

	int stopping;
	printf("Stopping number:");
	scanf("%d", &stopping);

	int size;
	printf("Step size:");
	scanf("%d", &size);

	printf("\n");

	printf("Using a for loop:");
	printf("\n\n");

	printf("Starting at %d...", starting);
	printf("\n\n");

	int count = 0;

	for (starting; starting <= stopping; starting += size)
	{
		count ++;

		printf("%d...\n", starting);
	}

	printf("\n");

	printf("Stopping at %d", stopping);
	printf("\n\n");

	printf("This loop did %d iterations.", count);

	printf("\n\n");

	return 0;
}