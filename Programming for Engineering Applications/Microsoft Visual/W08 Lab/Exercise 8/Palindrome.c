#include <stdio.h>
#include <string.h>

int palindrome(char* p_cstring, char* string_copy);

int main()
{
	char buffer1[] = "Anne, I vote more cars race Rome to Vienna";
	char buffer2[] = "Anne, I vote more cars race Rome to Vienna";
	char buffer3[] = "anneivotemorecarsracerometovienna";

	char copy_array[999];

	int palindrome_return = 0;

	strcpy(copy_array, buffer1);
	palindrome_return = palindrome(buffer1, copy_array);
	printf("[%s]\n", buffer1);
	if (palindrome_return == 1)
	{
		printf("Is a palindrome!");
	}
	else
	{
		printf("Is not a palindrome!");
	}
	printf("\n\n");

	strcpy(copy_array, buffer2);
	palindrome_return = palindrome(buffer2, copy_array);
	printf("[%s]\n", buffer2);
	if (palindrome_return == 1)
	{
		printf("Is a palindrome!");
	}
	else
	{
		printf("Is not a palindrome!");
	}
	printf("\n\n");

	strcpy(copy_array, buffer3);
	palindrome_return = palindrome(buffer3, copy_array);
	printf("[%s]\n", buffer3);
	if (palindrome_return == 1)
	{
		printf("Is a palindrome!");
	}
	else
	{
		printf("Is not a palindrome!");
	}
	printf("\n\n");

	return 0;
}