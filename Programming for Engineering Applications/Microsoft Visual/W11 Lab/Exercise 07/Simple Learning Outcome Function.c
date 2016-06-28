#include <stdio.h>

void print_assessments(int learning_outcome);

void print_assessments(int learning_outcome)
{
	printf("Reporting Journal\n");
	printf("Final Practical Exam\n");

	if (learning_outcome <= 9)
	{
		printf("Practical Test 3\n");

		if (learning_outcome <= 8)
		{
			printf("Practical Test 2\n");

			if (learning_outcome <= 6)
			{
				printf("Practical Test 1\n");
			}
		}
	}
}

int main()
{
	int input;
	printf("Learning Outcome? ");
	scanf("%d", &input);

	printf("\n");

	print_assessments(input);

	printf("\n\n");

	return 0;
}