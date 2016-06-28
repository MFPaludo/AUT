#include <stdio.h>

void print_colour(int nanometers)
{
	if (nanometers < 400 || nanometers > 700)
	{
		printf("%dnm is invisible", nanometers);
	}
	else if (nanometers <= 700 && nanometers >= 635)
	{
		printf("%dnm is red", nanometers);
	}
	else if (nanometers < 635 && nanometers >= 590)
	{
		printf("%dnm is orange", nanometers);
	}
	else if (nanometers < 590 && nanometers >= 560)
	{
		printf("%dnm is yellow", nanometers);
	}
	else if (nanometers < 560 && nanometers >= 520)
	{
		printf("%dnm is green", nanometers);
	}
	else if (nanometers < 520 && nanometers >= 490)
	{
		printf("%dnm is cyan", nanometers);
	}
	else if (nanometers < 490 && nanometers >= 450)
	{
		printf("%dnm is blue", nanometers);
	}
	else if (nanometers < 450 && nanometers >= 400)
	{
		printf("%dnm is violet", nanometers);
	}
}