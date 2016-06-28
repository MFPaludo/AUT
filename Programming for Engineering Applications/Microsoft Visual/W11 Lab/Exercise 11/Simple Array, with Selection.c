#include <stdio.h>

int main()
{
	int data[] = { 12, 28, 33, 18, 27, 10, 13, 91, 15 };

	int counter = 0;

	for (int i = 0; i <= 9; i++)
	{
		if (data[i] > 25)
		{
			counter++;
		}
	}

	printf("There are %d elements bigger than 25.", counter);

	printf("\n\n");

	return 0;
}