#include <stdio.h>
#include <string.h>

int palindrome(char* p_cstring, char* string_copy)
{

	strrev(string_copy);

	if(strcmp(p_cstring, string_copy) == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}