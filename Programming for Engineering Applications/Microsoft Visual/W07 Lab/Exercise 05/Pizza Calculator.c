#include <stdio.h>

int calculate_pizza_share(int number_of_people);

int main()
{
	int number_of_people;
	printf("How many people? ");
	scanf("%d", &number_of_people);

	int slices_per_person = calculate_pizza_share(number_of_people);
	printf("%d people get %d slice(s) each.", number_of_people, slices_per_person);

	printf("\n\n");

	return 0;
}