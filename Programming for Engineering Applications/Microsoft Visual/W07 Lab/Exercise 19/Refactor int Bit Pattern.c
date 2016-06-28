#include <stdio.h>

int convert_to_binary(int decimal);

int main()
{
	int decimal;

	do
	{
		printf("Enter a whole number in decimal (0 to stop): ");
		scanf("%d", &decimal);

		convert_to_binary(decimal);
	} while (0 != decimal);

	printf("\n\n");

	return 0;
}