#include <stdio.h>

int main()
{
	int seven = 0;
	
	for (int i = 7; i <= 1000; i += 7)
	{
		seven ++;
	}

	printf("There are %d numbers divisible by 7 between 1 and 1000.", seven);

	printf("\n\n");

	return 0;
}