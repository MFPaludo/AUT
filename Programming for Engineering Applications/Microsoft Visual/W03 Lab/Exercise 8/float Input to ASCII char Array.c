#include <stdio.h>

int main()
{
	float input;
	printf("Enter a real number: ");
	scanf("%f", &input);
	printf("\n\n");

	printf("Converting float into ASCII...");
	printf("\n\n");

	char elements[9];
	sprintf(elements, "%f", input);

	for (int i = 0; i < 8; i++)
	{
		printf("Element %d is: '%c' which is ASCII %d\n", i, elements[i], elements[i]);
	}

	printf("\n\n");
	return 0;
}