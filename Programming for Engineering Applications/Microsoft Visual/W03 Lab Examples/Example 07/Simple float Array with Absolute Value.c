#include <stdio.h>
#include <math.h>

int main()
{
	float data[] = { -2.1f, 3.7f, 5.1f, -0.5f, -2.9f };
	
	printf("Element 0 holds: %f\n", data[0]);
	printf("Element 1 holds: %f\n", data[1]);
	printf("Element 2 holds: %f\n", data[2]);
	printf("Element 3 holds: %f\n", data[3]);
	printf("Element 4 holds: %f\n", data[4]);
	printf("\n");
	
	float absolute[5];
	
	// Calculate the absolute value of each element:
	absolute[0] = fabs(data[0]);
	absolute[1] = fabs(data[1]);
	absolute[2] = fabs(data[2]);
	absolute[3] = fabs(data[3]);
	absolute[4] = fabs(data[4]);
	
	printf("|%f| is %f\n", data[0], absolute[0]);
	printf("|%f| is %f\n", data[1], absolute[1]);
	printf("|%f| is %f\n", data[2], absolute[2]);
	printf("|%f| is %f\n", data[3], absolute[3]);
	printf("|%f| is %f\n", data[4], absolute[4]);
	
	return 0;
}