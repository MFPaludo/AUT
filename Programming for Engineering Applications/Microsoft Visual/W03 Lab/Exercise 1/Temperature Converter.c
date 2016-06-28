#include <stdio.h>
#include <math.h>

int main()
{
	printf("+-----------------------+\n");
	printf("| Temperature Converter | \n");
	printf("+-----------------------+\n");

	printf("Please enter a temperature in Fahrenheit: ");
	
	float temperature_fahrenheit;
	scanf("%f", &temperature_fahrenheit);
	printf("\n\n");

	printf("Converting...");
	printf("\n\n");

	float temperature_celsius = (temperature_fahrenheit - 32) * 5 / 9;

	printf("%f degrees Fahrenheit is the same as...\n", temperature_fahrenheit);
	printf("%lf degrees Celsius.", temperature_celsius);

	printf("\n\n");
	return 0;
}