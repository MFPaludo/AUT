#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

struct Person
{
	char first_initial;
	char last_initial;
	int age;
	int weight;
	char sex;
	int height;
	char blood_type;
	int shoe_type;
};

struct OptimisedPerson
{
	int age;
	int weight;
	int height;
	int shoe_type;
	char first_initial;
	char last_initial;
	char sex;
	char blood_type;
};

int main()
{
	struct Person a_person;
	printf("The size of Person structure is %d bytes.\n", sizeof(a_person));

	struct OptimisedPerson another_person;
	printf("The size of OptimisedPerson structure is %d bytes.\n", sizeof(another_person));

	printf("\n\n");

	return 0;
}