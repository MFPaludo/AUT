#include <stdio.h>
#include <assert.h>

struct Car
{
	char manufacturer[20];
	char model[20];
	int year;
	float price;
};

void print_car(struct Car* p_car)
{
	assert(p_car);

	printf("Manufacturer: %s\n", p_car->manufacturer);
	printf("Model: %s\n", p_car->model);
	printf("Year: %d\n", p_car->year);
	printf("Price: %0.2f\n", p_car->price);
	printf("\n");
}

int main()
{
	struct Car nissan;

	nissan.year = 2008;
	nissan.price = 38070.0;
	sprintf(nissan.manufacturer, "Nissan");
	sprintf(nissan.model, "Fairlady Z Z33");

	struct Car mazda;

	mazda.year = 2012;
	mazda.price = 33000.0;
	sprintf(mazda.manufacturer, "Mazda");
	sprintf(mazda.model, "RX-8");

	print_car(&nissan);

	print_car(&mazda);

	return 0;
}