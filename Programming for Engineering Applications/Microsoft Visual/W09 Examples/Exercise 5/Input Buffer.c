#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* p_buffer = 0;

	p_buffer = (char*)malloc(sizeof(char) * 1024);

	if (0 == p_buffer)
	{
		printf("Malloc failed to allocate memory!\n");
	}
	else
	{
		printf("Enter some text: ");

		scanf("%1023s", p_buffer);

		printf("You typed: %s.\n", p_buffer);

		free(p_buffer);
		p_buffer = 0;
	}

	printf("\n\n");

	return 0;
}