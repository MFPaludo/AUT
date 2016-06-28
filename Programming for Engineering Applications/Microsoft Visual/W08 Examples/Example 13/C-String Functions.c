#include <stdio.h>
#include <string.h>

int main()
{
	char text[] = "apple";
	char more[] = "orange";

	char buffer1[20];
	char buffer2[20];

	int length_of_text = strlen(text);
	int length_of_more = strlen(more);

	strcpy(buffer1, text);

	if (strcmp(buffer1, more) == 0)
	{
		printf("'buffer1' and 'more' match!\n");
	}
	else
	{
		printf("'buffer1' and 'more' do not match!\n");
	}

	strcpy(buffer2, buffer1);
	strcat(buffer2, text);
	strcat(buffer2, more);

	printf("'buffer1': %s\n", buffer1);
	printf("'buffer2': %s\n", buffer2);

	return 0;
}