#include <stdio.h>

int convert_to_binary(int decimal)
{
	int num_bytes = sizeof(int);
	int num_bits = num_bytes * 8;

	printf("\n%d in base-10 is", decimal);

	for (int i = num_bits - 1; i >= 0; --i)
	{
		int bit_to_check = (1 << i);

		if (0 == (i + 1) % 8)
		{
			printf(" ");
		}

		if (decimal & bit_to_check)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}

	printf(" in base-2.\n\n");
}