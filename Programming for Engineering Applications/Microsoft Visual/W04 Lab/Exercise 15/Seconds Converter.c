#include <stdio.h>
#include<math.h>

int main()
{
	int seconds;
	printf("Enter a number in seconds: ");
	scanf("%d", &seconds);
	printf("\n\n");
	
	int hours = seconds / 3600;
	int minuts = seconds / 60 - hours * 60;
	int seconds_result = seconds % 60;

	printf("This is %d hours, %d minuts, and %d seconds", hours, minuts, seconds_result);

	printf("\n\n");
	return 0;
}