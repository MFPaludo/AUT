#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void seed_random();
int get_random(int low, int high);
void wait_for_enter();

int main()
{
	seed_random();

	do
	{
		int dice[5];

		for (int i = 0; i < 5; ++i)
		{
			dice[i] = get_random(1, 6);
		}

		for (int i = 0; i < 5; ++i)
		{
			printf("dice[%d] is %d\n", i, dice[i]);
		}

		wait_for_enter();
	} 
	while (1);

	return 0;
}

void seed_random()
{
	srand(time(0));
}

int get_random(int low, int high)
{
	return ((rand() % (high - low + 1)) + low);
}

void wait_for_enter()
{
	char input = 0;
	scanf("%c", &input);
}