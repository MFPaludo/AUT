#include <stdio.h>

int main()
{
	int first;
	printf("Please enter a number: ");
	scanf("%d", &first);

	int second;
	printf("Please enter another number: ");
	scanf("%d", &second);

	int third;
	printf("Please enter a third number: ");
	scanf("%d", &third);

	printf("\n");

	printf("The numbers, from the biggest to smallest, are:");

	if (first > second && second > third)
	{
		printf("%d then %d then %d", first, second, third);
	}
	else if (first > third && third > second)
	{
		printf("%d then %d then %d", first, third, second);
	}
	else if (second > first && first > third)
	{
		printf("%d then %d then %d", second, first, second);
	}
	else if (second > third && third > first)
	{
		printf("%d then %d then %d", second, third, first);
	}
	else if (third > first && first > second)
	{
		printf("%d then %d then %d", third, first, second);
	}
	else if (third > second && second > first)
	{
		printf("%d then %d then %d", third, second, first);
	}

	printf("\n\n");

	return 0;
}