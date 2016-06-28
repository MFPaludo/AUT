#include <stdio.h>
#include<math.h>

int main()
{
	int cents;
	printf("Enter the change in cents: ");
	scanf("%d", &cents);
	printf("\n\n");

	int s2 = cents / 200;
	cents %= 200;

	int s1 = cents / 100;
	cents %= 100;

	int s05 = cents / 50;
	cents %= 50;

	int s02 = cents / 20;
	cents %= 20;

	int s01 = cents / 10;
	cents %= 10;

	int s005 = cents / 5;
	cents %= 5;

	int s002 = cents / 2;
	cents %= 2;

	int s001 = cents;

	printf("You should give:\n");
	printf("%d $2\n", s2);
	printf("%d $1\n", s1);
	printf("%d $0.50\n", s05);
	printf("%d $0.20\n", s02);
	printf("%d $0.10\n", s01);
	printf("%d $0.05\n", s005);
	printf("%d $0.02\n", s002);
	printf("%d $0.01\n", s001);

	printf("\n\n");
	return 0;
}