#include <stdio.h>
#include<math.h>

int main()
{
	float rad;
	printf("Enter an angle in radians: ");
	scanf("%f", &rad);
	printf("\n\n");

	float degrees = rad * 57.29577951;
	printf("The angle in degrees is: %f\n", degrees);

	printf("\n\n");
	return 0;
}