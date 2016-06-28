#include <stdio.h>

int main()
{
	float grade;
	printf("Please enter your Practical Test 1 percentage: ");
	scanf("%f", &grade);

	if (grade < 50)
	{
		printf("%f is a 'D'", grade);
	}
	else if (grade >= 50 && grade < 55)
	{
		printf("%f is a 'C-'", grade);
	}
	else if (grade >= 55 && grade < 60)
	{
		printf("%f is a 'C'", grade);
	}
	else if (grade >= 60 && grade < 65)
	{
		printf("%f is a 'C+'", grade);
	}
	else if (grade >= 65 && grade < 70)
	{
		printf("%f is a 'B-'", grade);
	}
	else if (grade >= 70 && grade < 75)
	{
		printf("%f is a 'B'", grade);
	}
	else if (grade >= 75 && grade < 80)
	{
		printf("%f is a 'B+'", grade);
	}
	else if (grade >= 80 && grade < 85)
	{
		printf("%f is a 'A-'");
	}
	else if (grade >= 85 && grade < 90)
	{
		printf("%f is a 'A'");
	}
	else if (grade >= 90)
	{
		printf("%f is a 'A+'");
	}

	printf("\n\n");

	return 0;
}