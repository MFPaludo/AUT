#include<stdio.h>
#include<stdlib.h>
#include<math.h>

unsigned long convert_method(char hex[]);

int main()
{
	char hex[3];
	unsigned long decimalNumber;
	printf(" C Program to Convert Hexadecimal Number to Decimal Number \n");
	printf(" Enter 32-bit Hexadecimal Number : ");
	scanf("%2s", hex);

	decimalNumber = convert_method(hex);
	printf(" Decimal Number is %u  \n", decimalNumber);

	return 0;
}