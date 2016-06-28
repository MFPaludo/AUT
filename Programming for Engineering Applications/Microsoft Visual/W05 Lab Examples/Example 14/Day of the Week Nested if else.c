#include <stdio.h>

int main()
{
	int day;

	printf("Enter a day of the week ");
	printf("(Sunday is 1, Monday is 2, etc): ");
	scanf("%d", &day);

	if (1 <= day && day <= 7)
	{
		if (1 == day || 7 == day)
		{
			printf("Weekend!\n");
		}
		else
		{
			printf("Weekday!\n");
		}
	}
	else
	{
		printf("Not a valid day!\n");
	}

	return 0;
}