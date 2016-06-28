#include <stdio.h>
int main()
{
	int number;

	printf("Input an odd number between 0 and 8: ");
	scanf("%d", &number);

	switch (number)
	{
		case 1:
		{
			printf("User input ONE\n");
			break;
		}
		case 3:
		{
			printf("User input THREE\n");
			break;
		}
		case 5:
		{
			printf("User input FIVE\n");
			break;
		}
		case 7:
		{
			printf("User input SEVEN\n");
			break;
		}
		default:
		{
			printf("User input does not match ");
			printf("the requirements!\n\n");
			printf("Should be 1, 3, 5, or 7.\n");
			break;
		}
	}

	return 0;
}