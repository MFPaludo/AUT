#include <stdio.h>

int main()
{
	printf("Key:	January is 1\n");
	printf("	February is 2\n");
	printf("	March is 3\n");
	printf("	April is 4\n");
	printf("	May is 5\n");
	printf("	June is 6\n");
	printf("	July is 7\n");
	printf("	August is 8\n");
	printf("	September is 9\n");
	printf("	October is 10\n");
	printf("	November is 11\n");
	printf("	December is 12\n");

	printf("\n");

	int month;
	printf("What month were you born in?");
	scanf("%d", &month);

	printf("\n");

	switch (month)
	{
		case 1:
		{
			printf("January in New Zealand is in Summer.");
			break;
		}
		case 2:
		{
			printf("February in New Zealand is in Summer.");
			break;
		}
		case 3:
		{
			printf("March in New Zealand is in Autumn.");
			break;
		}
		case 4:
		{
			printf("April in New Zealand is in Autumn.");
			break;
		}
		case 5:
		{
			printf("May in New Zealand is in Autumn.");
			break;
		}
		case 6:
		{
			printf("June in New Zealand is in Winter.");
			break;
		}
		case 7:
		{
			printf("July in New Zealand is in Winter.");
			break;
		}
		case 8:
		{
			printf("August in New Zealand is in Winter.");
			break;
		}
		case 9:
		{
			printf("September in New Zealand is in Spring.");
			break;
		}
		case 10:
		{
			printf("October in New Zealand is in Spring.");
			break;
		}
		case 11:
		{
			printf("November in New Zealand is in Spring.");
			break;
		}
		case 12:
		{
			printf("December in New Zealand is in Summer.");
			break;
		}
		default:
		{
			printf("This is not a valid number.");
			break;
		}
	}

	printf("\n\n");

	return 0;
}