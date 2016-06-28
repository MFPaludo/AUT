#include <stdio.h>

int count_vowels(char* char_array);

int count_vowels(char* char_array)
{
	int counter = 0;
	int count_steps = 0;

	do
	{
		if (char_array[count_steps] == 'a' || char_array[count_steps] == 'e' || char_array[count_steps] == 'i' || char_array[count_steps] == 'o' || char_array[count_steps] == 'u' || char_array[count_steps] == 'A' || char_array[count_steps] == 'E' || char_array[count_steps] == 'I' || char_array[count_steps] == 'O' || char_array[count_steps] == 'U')
		{
			counter++;
		}

		count_steps++;
	} 
	while (char_array[count_steps] != '\0');

	return counter;
}

int main()
{
	char test_string[] = "CaN_i_progrAM?";

	int result = count_vowels(&test_string);

	printf("There are %d vowels in the array.", result);

	printf("\n\n");

	return 0;
}