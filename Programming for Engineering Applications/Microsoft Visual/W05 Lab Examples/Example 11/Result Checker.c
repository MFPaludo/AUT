#include <stdio.h>

int main()
{
	char grade = 0;

	printf("What letter grade did you achieve? ");
	printf("(A, B, C, or D) ");
	scanf("%c", &grade);
	printf("Your letter grade is: %c\n", grade);

	switch (grade)
	{
		case 'A':
		{
			printf("Excellent result!\n");
			break;
		}
		case 'B':
		{
			printf("Well done!\n");
			break;
		}
		case 'C':
		{
			printf("You passed!\n");
			break;
		}
		case 'D':
		{
			printf("Better study more next time!\n");
			break;
		}
		default:
		{
			printf("Invalid grade entered!!!\n");
			break;
		}
	}

	return 0;
}