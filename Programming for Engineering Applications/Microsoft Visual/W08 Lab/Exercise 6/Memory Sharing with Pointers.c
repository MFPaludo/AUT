#include<stdio.h>

void zero_out_array(int* p_array, int num_elements);

void print_array(int* p_array, int num_elements);

int main()
{
	int main_array[] = { 15, 24, 33, 42, 51 };

	print_array(main_array, 5);

	zero_out_array(main_array, 5);

	print_array(main_array, 5);

	printf("\n\n");

	return 0;
}