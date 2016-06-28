#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* p_text = fopen("input.txt", "r");

	char char_array;

	int line_count = 1;

	printf("%d) ", line_count);

	while (fscanf(p_text, "%c", &char_array) == 1)
	{
		printf("%c", char_array);

		if (char_array == '\n')
		{
			printf("%d) ", line_count);
			line_count++;
		}
	}

	fclose(p_text);

	printf("\n\n");

	return 0;
}