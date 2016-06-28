#include <stdio.h>
int main()
{
	char operation = 0;
	int left = 0;
	int right = 0;

	printf("Math Operations: \n");
	printf(" [a] Add \n");
	printf(" [s] Subtract \n");
	printf(" [m] Multiply \n");
	printf(" [d] Divide \n");
	printf("\nChoose an operation: \n");
	scanf(" %c", &operation);
	printf("\nEnter the left operand: \n");
	scanf(" %d", &left);
	printf("\nEnter the right operand: \n");
	scanf(" %d", &right);

	switch (operation)
	{
		case 'a':
		{
			printf("%d + %d is %d\n", left, right, left + right);
			break;
		}
		case 'm':
		{
			printf("%d * %d is %d\n", left, right, left * right);
			break;
		}
		case 'd':
		{
			printf("%d / %d is %d\n", left, right, left / right);
			break;
		}
		case 's':
		{
			printf("%d - %d is %d\n", left, right, left - right);
			break;
		}
		default:
		{
			printf("Unknown operation!\n");
			break;
		}
	}

	return 0;
}