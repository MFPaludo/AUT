#include <stdio.h>

char convert_percent_to_grade(int grade);

char convert_percent_to_grade(int grade)
{
	if (grade >= 80)
	{
		return 'A';
	}
	else if (grade >= 65)
	{
		return 'B';
	}
	else if (grade >= 50)
	{
		return 'C';
	}
	else
	{
		return 'D';
	}
}

int main()
{
	int grade;
	printf("Please, enter your grade: ");
	scanf("%d", &grade);

	char grade_letter = convert_percent_to_grade(grade);

	printf("%d evaluates a %c", grade, grade_letter);

	printf("\n\n");

	return 0;
}