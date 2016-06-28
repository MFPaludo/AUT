#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;

	printf("Enter a number: ");
	scanf("%d", &a);

	printf("Enter another number: ");
	scanf("%d", &b);

	int is_equal = a == b;
	int is_not_equal = a != b;

	int is_a_greater_than_b = a > b;
	int is_a_less_than_b = a < b;

	int is_a_grtr_or_equal_b = a >= b;
	int is_a_less_or_equal_b = a <= b;

	printf("Value in is_equal: ");
	printf("%d\n", is_equal);

	printf("Value in is_not_equal: ");
	printf("%d\n", is_not_equal);

	printf("Value in is_a_greater_than_b: ");
	printf("%d\n", is_a_greater_than_b);

	printf("Value in is_a_less_than_b: ");
	printf("%d\n", is_a_less_than_b);

	printf("Value in is_a_grtr_or_equal_b: ");
	printf("%d\n", is_a_grtr_or_equal_b);

	printf("Value in is_a_less_or_equal_b: ");
	printf("%d\n", is_a_less_or_equal_b);

	return 0;
}