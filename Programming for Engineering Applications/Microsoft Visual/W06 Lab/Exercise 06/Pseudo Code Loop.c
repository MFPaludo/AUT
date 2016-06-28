#include <stdio.h>

int main()
{
	/*
	FOR (integer n is initially equal to 0
	keep looping as long as n is less than 10
	add 1 to n at the end of the loop)
	Each time around the loop do this:
	IF (n is greater than 4) THEN
	PRINT n followed by a newline.
	ELSE
	PRINT the result of 9 – n followed by a newline.
	*/
	int result = 0;

	for (int n = 0; n < 10; n++)
	{
		if (n > 4)
		{
			printf("%d\n", n);
		}
		else
		{
			result = 9 - n;
			printf("%d\n", result);
		}
	}

	printf("\n\n");

	return 0;
}