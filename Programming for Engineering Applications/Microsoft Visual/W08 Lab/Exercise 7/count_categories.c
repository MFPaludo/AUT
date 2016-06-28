#include <stdio.h>
#include <string.h>

void count_categories(char* p_cstring, int* p_upper_count, int* p_lower_count, int* p_digit_count)
{
	*p_upper_count = 0;
	*p_lower_count = 0;
	*p_digit_count = 0;

	for (int i = 0; i < strlen(p_cstring); i++)
	{
		if (p_cstring[i] >= 65 && p_cstring[i] <= 90)
		{
			*p_upper_count += 1;
		}
		else if (p_cstring[i] >= 97 && p_cstring[i] <= 122)
		{
			*p_lower_count += 1;
		}
		else if (p_cstring[i] >= 48 && p_cstring[i] <= 57)
		{
			*p_digit_count += 1;
		}
	}
}