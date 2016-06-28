#include <stdio.h>
#include<math.h>

int main()
{
	int base;
	printf("Please enter a base: ");
	scanf("%d", &base);
	printf("\n\n");

	int pow0 = pow(base, 0);
	printf("%d ^ 0 is %d\n", base, pow0);

	int pow1 = pow(base, 1);
	printf("%d ^ 1 is %d\n", base, pow1);
	
	int pow2 = pow(base, 2);
	printf("%d ^ 2 is %d\n", base, pow2);

	int pow3 = pow(base, 3);
	printf("%d ^ 3 is %d\n", base, pow3);

	int pow4 = pow(base, 4);
	printf("%d ^ 4 is %d\n", base, pow4);

	int pow5 = pow(base, 5);
	printf("%d ^ 5 is %d\n", base, pow5);

	int pow6 = pow(base, 6);
	printf("%d ^ 6 is %d\n", base, pow6);

	int pow7 = pow(base, 7);
	printf("%d ^ 7 is %d\n", base, pow7);

	int pow8 = pow(base, 8);
	printf("%d ^ 8 is %d\n", base, pow8);

	printf("\n\n");
	return 0;
}