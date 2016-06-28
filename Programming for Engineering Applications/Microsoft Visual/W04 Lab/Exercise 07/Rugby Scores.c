#include <stdio.h>

int main()
{
	int games[5];

	printf("Enter your team's score for the first game:");
	scanf("%d", &games[0]);
	printf("Enter your team's score for the second game:");
	scanf("%d", &games[1]);
	printf("Enter your team's score for the third game:");
	scanf("%d", &games[2]);
	printf("Enter your team's score for the fourth game:");
	scanf("%d", &games[3]);
	printf("Enter your team's score for the fifth game:");
	scanf("%d", &games[4]);
	printf("\n");

	float sum = games[0] + games[1] + games[2] + games[3] + games[4];
	float average = sum / 5;

	printf("The average score is %f", average);

	printf("\n\n");
	return 0;
}