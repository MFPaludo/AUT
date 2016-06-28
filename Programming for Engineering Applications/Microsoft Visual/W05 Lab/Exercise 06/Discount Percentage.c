#include <stdio.h>

int main()
{
	int purchase;
	printf("Input the total purchase price: ");
	scanf("%d", &purchase);

	int discount;
	int total;

	if (purchase < 2500)
	{
		printf("Discount is: 0\n");
		printf("Payable Total is: %d", purchase);
	}
	else if (purchase >= 2500 && purchase < 6500)
	{
		discount = purchase * 0.05;
		total = purchase - discount;
		
		printf("Discount is: %d\n", discount);
		printf("Payable Total is: %d", total);
	}
	else if (purchase >= 6500 && purchase <= 10000)
	{
		discount = purchase * 0.1;
		total = purchase - discount;

		printf("Discount is: %d\n", discount);
		printf("Payable Total is: %d", total);
	}
	else if (purchase > 10000)
	{
		discount = purchase * 0.125;
		total = purchase - discount;

		printf("Discount is: %d\n", discount);
		printf("Payable Total is: %d", total);
	}

	printf("\n\n");

	return 0;
}