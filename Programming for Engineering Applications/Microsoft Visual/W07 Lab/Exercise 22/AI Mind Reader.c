#include <stdio.h>

void check_cheat(char answer, int guess, int minimum, int maximum);
char scan_char();
int math(int guess, int minimum, int maximum);

int main()
{
	printf("Think of a number between 0 and 100, I will guess it!\n");

	char answer = 'a';
	int guess = 50;
	int previous = 50;
	int maximum = 100;
	int minimum = 0;

	do
	{
		previous = guess;
		printf("I guess %d", guess);
		printf("\n");
		printf("Am I right (h/l/y)? ");

		answer = scan_char();

		check_cheat(answer, guess, minimum, maximum);


		if (answer == 'l')
		{
			maximum = previous;
			math(guess, minimum, maximum);
		}
		else if (answer == 'h')
		{
			minimum = previous;
			guess = math(guess, minimum, maximum);
		}
	} 
	while (answer != 'y');

	printf("\n\n");

	return 0;
}