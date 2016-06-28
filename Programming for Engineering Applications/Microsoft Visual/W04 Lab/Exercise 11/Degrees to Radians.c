#include <stdio.h>
#include<math.h>

int main()
{
	float degrees;
	printf("Enter an angle in degrees: ");
	scanf("%f", &degrees);
	printf("\n\n");

	float radians = degrees * 0.017453293;
	printf("The angle in radians is: %f\n", radians);

	printf("\n\n");
	return 0;
}