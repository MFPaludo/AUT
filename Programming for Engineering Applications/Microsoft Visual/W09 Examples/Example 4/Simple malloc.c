#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* p_age = 0;

	p_age = (int*)malloc(sizeof(int));

	if (0 == p_age)
	{
		printf("Malloc failed to allocate memory!\n");
	}
	else
	{
		printf("How old are you? ");

		scanf("%d", p_age);

		printf("You are %d years old.\n", *p_age);

		free(p_age);
		p_age = 0;
	}

	printf("\n\n");

	return 0;
}