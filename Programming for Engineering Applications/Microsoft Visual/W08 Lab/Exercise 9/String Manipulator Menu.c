#include <stdio.h>

int number_of_vowels(char* c_string);
int number_of_consonants(char* c_string);
int number_of_spaces(char* c_string);
void to_uppercase(char* c_string);
void to_lowercase(char* c_string);

int main()
{
	char c_string[101];
	printf("Enter a string: ");
	scanf(" %100s", c_string);
	printf("\n");

	int choice = 0;
	int vowels = 0;
	int consonants = 0;
	int spaces = 0;

	do
	{
		printf("Select an option:\n");
		printf("1. Count the number of vowels.\n");
		printf("2. Count the number of consonants.\n");
		printf("3. Count the number of spaces.\n");
		printf("4. Convert to upper case.\n");
		printf("5. Convert to lower case.\n");
		printf("6. Echo input string.\n");
		printf("7. Enter another string.\n");
		printf("8. Quit.\n");
		scanf("%d", &choice);
		printf("\n");

		switch (choice)
		{
		case 1:
			vowels = number_of_vowels(c_string);
			printf("The string has %d vowels.\n", vowels);
			break;
		case 2:
			consonants = number_of_consonants(c_string);
			printf("The string has %d consonants.\n", consonants);
			break;
		case 3:
			spaces = number_of_spaces(c_string);
			printf("The string has %d spaces.\n", spaces);
			break;
		case 4:
			to_uppercase(c_string);
			printf("\n");
			break;
		case 5:
			to_lowercase(c_string);
			printf("\n");
			break;
		case 6:
			printf("%s\n", c_string);
			break;
		case 7:
			printf("Enter a string: ");
			scanf("%100s", c_string);
			printf("%s\n", c_string);
			break;
		}

		printf("\n");
	}
	while (choice != 8);

	return 0;
}