#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	char hex[3];
	printf("Input a two-digit hexadecimal number: ");
	scanf("%2s", hex);

	printf("\n");

	static int LENGTH = 2;
	for (int n = 0; n < LENGTH; n++)
	{
		if ((hex[n] < 48) || (hex[n] > 57 && hex[n] < 65) || (hex[n] > 70))
		{
			printf("Input is not a hexadecimal number!");
			printf("\n\n");

			return 0;
		}
	}

	unsigned long decimal_number = convert_method(hex);
	printf("%s (Base-16) is %u (Base10)", hex, decimal_number);

	printf("\n\n");

	return 0;
}