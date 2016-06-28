#include <stdio.h>

int main()
{
	char answer;
	printf("Question (Y/N)?");
	scanf("%c", &answer);

	if (answer == 'y' || answer == 'Y')
	{
		printf("User response: Yes");
	}
	else if (answer == 'n' || answer == 'N')
	{
		printf("User response: No");
	}
	else
	{
		printf("User response: Invalid input!");
	}

	printf("\n\n");

	return 0;
}