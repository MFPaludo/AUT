#include <stdio.h>

int main(int argc, char* argv[])
{
	printf("There are %d arguments supplied.\n", argc);

	printf("\n");

	for (int k = 0; k < argc; ++k)
	{
		printf("argv[%d] is %s\n", k, argv[k]);
		printf("\n");
	}

	printf("\n\n");

	return 0;
}