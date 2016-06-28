#include <stdio.h>
#include <assert.h>

void print_grade(char grade)
{
	assert(grade == 'A' ||
		grade == 'B' ||
		grade == 'C' ||
		grade == 'D');

	printf("Grade: %c\n", grade);
}

int main()
{
	print_grade('D');

	print_grade('C');

	print_grade('x');

	print_grade('B');

	print_grade('A');

	return 0;
}