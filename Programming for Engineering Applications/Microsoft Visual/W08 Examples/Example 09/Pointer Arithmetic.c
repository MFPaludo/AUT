#include <stdio.h>

int main()
{
	float real_array[] = { 1.1f, 2.5f, 1.6f, 3.9f, 3.1f };

	printf("Example 1: Pointer Addition...\n\n");

	float* ptr_first = real_array;

	for (int k = 0; k < 5; ++k)
	{
		printf("%f ", *(ptr_first + k));
	}

	printf("\n\n");

	printf("Example 2: Pointer Increment...\n\n");

	float* ptr_current = real_array;

	for (int k = 0; k < 5; ++k)
	{
		printf("%f ", *ptr_current);
		++ptr_current;
	}

	printf("\n\n");

	return 0;
}