#include <stdio.h>

int main()
{
	int array1[3];
	int array2[3];

	printf("First Array Setup...");
	printf("\n\n");

	printf("	Please enter the 1st value: ");
	scanf("%d", &array1[0]);
	printf("	Please enter the 2nd value: ");
	scanf("%d", &array1[1]);
	printf("	Please enter the 3rd value: ");
	scanf("%d", &array1[2]);
	printf("\n\n");

	printf("First array is: { %d, %d, %d }", array1[0], array1[1], array1[2]);
	printf("\n\n");

	printf("Second Array Setup...");
	printf("\n\n");

	printf("	Please enter the 1st value: ");
	scanf("%d", &array2[0]);
	printf("	Please enter the 2nd value: ");
	scanf("%d", &array2[1]);
	printf("	Please enter the 3rd value: ");
	scanf("%d", &array2[2]);
	printf("\n\n");

	printf("Second array is: { %d, %d, %d}", array2[0], array2[1], array2[2]);
	printf("\n\n");

	printf("	C..a..l..c..u..l..a..t..i..n..g..");
	printf("\n\n");
	
	int sum[3];
	int subtract[3];
	int multiply[3];

	for (int i = 0; i < 3; i++)
	{
		sum[i] = array1[i] + array2[i];
		subtract[i] = array1[i] - array2[i];
		multiply[i] = array1[i] * array2[i];
	}

	printf("Adding corresponding elements: { %d, %d, %d }", sum[0], sum[1], sum[2]);
	printf("\n\n");

	printf("Subtracting corresponding elements: { %d, %d, %d }", subtract[0], subtract[1], subtract[2]);
	printf("\n\n");

	printf("Multiplying corresponding elements: { %d, %d, %d }", multiply[0], multiply[1], multiply[2]);
	printf("\n\n");

	return 0;
}