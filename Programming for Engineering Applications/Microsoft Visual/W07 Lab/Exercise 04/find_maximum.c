#include <stdio.h>

float find_maximum(float a, float b, float c)
{
	if (a > b && a > c)
	{
		return a;
	}
	else if (b > a && b > c)
	{
		return b;
	}
	else
	{
		return c;
	}
}