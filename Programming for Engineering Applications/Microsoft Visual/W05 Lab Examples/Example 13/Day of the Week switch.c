#include <stdio.h>

int main()
{
	int day;

	printf("Enter a day of the week ");
	printf("(Sunday is 1, Monday is 2, etc): ");
	scanf("%d", &day);

	switch (day)
	{
		case 1: //Sunday, fall through.
		case 7: //Saturday
		{
			printf("Weekend!\n");
			break;
		}
		case 2: //Monday, fall through.
		case 3: //Tuesday, fall through.
		case 4: //Wednesday, fall through.
		case 5: //Thusday, fall Through.
		case 6: //Friday
		{
			printf("Weekday!\n");
			break;
		}
		default:
		{
			printf("Not a valid day!\n");
			break;
		}
	}

	return 0;
}