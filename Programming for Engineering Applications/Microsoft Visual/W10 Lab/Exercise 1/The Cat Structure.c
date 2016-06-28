#include <stdio.h>

struct Cat
{
	int age;
	int weight;
	int tail_length;
	char name[100];
};

int main()
{
	struct Cat whiskers;
	whiskers.age = 7;
	whiskers.weight = 8;
	whiskers.tail_length = 15;
	sprintf(whiskers.name, "Whiskers");

	printf("A cat...");
	printf("\n\n");

	printf("Name:			%s\n", whiskers.name);
	printf("Age:			%d\n", whiskers.age);
	printf("Weight:			%d\n", whiskers.weight);
	printf("Tail Length:		%d\n", whiskers.tail_length);

	printf("\n\n");

	return 0;
}