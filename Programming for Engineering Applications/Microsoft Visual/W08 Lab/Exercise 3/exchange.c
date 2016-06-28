#include <stdio.h>

void exchange(float* px, float* py)
{
	int temporary = *px;

	*px = *py;
	*py = temporary;
}