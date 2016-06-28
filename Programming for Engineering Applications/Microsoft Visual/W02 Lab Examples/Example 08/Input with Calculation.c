#include <stdio.h>

int main()
{
	int data;

	printf("Enter a number: ");
	scanf("%d", &data);

	data = data * 5;

	printf("Five times the input is: %d.\n", data);

	return 0;
}