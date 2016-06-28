#include <stdio.h>

int main()
{
	int first;
	printf("Enter the first angle (in degrees): ");
	scanf("%d", &first);

	int second;
	printf("Enter the second angle (in degrees): ");
	scanf("%d", &second);

	int third;
	printf("Enter the third angle (in degrees): ");
	scanf("%d", &third);

	printf("\n");

	if (first + second + third == 180 && first != 0 && second != 0 && third != 0)
	{
		if (first == 90 || second == 90 || third == 90)
		{
			printf("%d, %d, and %d is a valid right-angle triangle.", first, second, third);
		}
		else
		{
			printf("%d, %d, and %d is a valid triangle.", first, second, third);
		}
	}
	else
	{
		printf("%d, %d, and %d is not a valid triangle.", first, second, third);
	}

	printf("\n\n");

	return 0;
}