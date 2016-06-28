#include <stdio.h>

int main()
{
	int first;
	printf("Please enter a number: ");
	scanf("%d", &first);

	int second;
	printf("Please enter another number: ");
	scanf("%d", &second);

	if (first == second)
	{
		printf("The same number (%d) was entered twice.", first);
	}
	else if (first > second)
	{
		printf("%d is bigger than %d", first, second);
	}
	else
	{
		printf("%d is bigger than %d", second, first);
	}

	printf("\n\n");

	return 0;
}