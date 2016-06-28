#include <stdio.h>

int main()
{
	int cases;
	printf("Number of test cases? ");
	scanf("%d", &cases);

	char word[100];

	for (int i = 0; i < cases; i++)
	{
		printf("Test Case %d: ", i + 1);
		scanf("%99s", word);
		printf("Output: Hello %s!\n", word);
	}

	printf("\n\n");

	return 0;
}