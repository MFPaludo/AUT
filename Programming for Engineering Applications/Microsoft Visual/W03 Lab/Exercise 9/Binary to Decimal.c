#include <stdio.h>
#include <math.h>

int main()
{
	char binary[9];
	printf("Input an 8 bit binary number: ");
	scanf("%s", binary);
	printf("\n\n");

	int sum = 0;
	int result = 0;

	for (int i = 7; i >= 0; i--)
	{
		result = pow(2, i) * (binary[i] - 48);
		sum += result;
		printf("((2 ^ %d) * %c) is %d\n", i, binary[i], result);
	}

	printf("\n");
	printf("-------------------------------------\n");
	printf("%s in Binary is %d in Decimal\n", binary, sum);
	printf("-------------------------------------\n");

	printf("\n\n");
	return 0;
}