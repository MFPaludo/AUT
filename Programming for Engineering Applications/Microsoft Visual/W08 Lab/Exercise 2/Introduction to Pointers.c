#include <stdio.h>

int main()
{
	printf("Week8: Introduction to Pointers\n");

	int my_age;
	my_age = 21;

	int* my_pointer;
	my_pointer = &my_age;

	printf("my_age holds the value %d\n", my_age);
	printf("my_pointer holds the value %p\n", my_pointer);
	printf("my_pointer points to the value %d\n", *my_pointer);

	printf("Indirection test!\n");

	*my_pointer = 0;

	printf("my_age holds the value %d\n", my_age);
	printf("my_pointer holds the value %p\n", my_pointer);
	printf("my_pointer points to the value %d\n", *my_pointer);

	printf("\n\n");

	return 0;
}