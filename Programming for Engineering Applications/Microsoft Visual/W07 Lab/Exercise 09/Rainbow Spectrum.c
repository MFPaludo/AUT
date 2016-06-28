#include <stdio.h>

void print_colour(int nanometers);

int main()
{
	int nanometers;
	printf("Enter a wavelength in nanometers: ");
	scanf("%d", &nanometers);

	print_colour(nanometers);

	printf("\n\n");

	return 0;
}