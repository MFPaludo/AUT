#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));

	int first = (rand() % 100) + 1;
	int second = (rand() % 100) + 2;
	
	int sum = first + second;

	int user;
	printf("What is %d + %d? ", first, second);
	scanf("%d", &user);

	if (user == sum)
	{
		printf("Correct!");
	}
	else
	{
		printf("Wrong! %d + %d is %d", first, second, sum);
	}

	printf("\n\n");

	return 0;
}