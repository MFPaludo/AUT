#include <stdio.h>

int calculate_pizza_share(int number_of_people)
{
	int slices_per_person = 8 / number_of_people;

	return slices_per_person;
}