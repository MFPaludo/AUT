#include<stdio.h>
#include<stdlib.h>
#include<math.h>

unsigned long convert_method(char hex[])
{
	char *hexString;
	static int LENGTH = 2;
	static const int BASE = 16;
	unsigned long decimalNumber = 0;

	hexString = hex;
	for (int i = 0; *hexString != '\0' && i < LENGTH; i++, hexString++)
	{
		if (*hexString >= 48 && *hexString <= 57)
		{
			decimalNumber += (((int)(*hexString)) - 48) * pow(BASE, LENGTH - i - 1);
		}
		else if ((*hexString >= 65 && *hexString <= 70))
		{
			decimalNumber += (((int)(*hexString)) - 55) * pow(BASE, LENGTH - i - 1);
		}
		else
		{
			printf("Input is not a hexadecimal number!");
			printf("\n\n");

			return 0;
		}
	}
	return decimalNumber;
}