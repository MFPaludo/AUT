#include <stdio.h>

int main()
{
	char* strings[] =
	{
		"Hello",
		"COMP500",
		"/",
		"ENSE501",
		"Students",
		"!!!"
	};

	for (int k = 0; k < 6; ++k)
	{
		printf("%s ", strings[k]);
	}

	printf("\n\n");

	return 0;
}