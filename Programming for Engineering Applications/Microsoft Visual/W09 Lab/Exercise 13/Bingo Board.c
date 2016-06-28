#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));

	int bingo[5][5] = { 0 };

	int temp = 0;

	for (int row = 0; row < 5; row++)
	{
		for (int column = 0; column < 5; column++)
		{
			if (column == 0)
			{
				do
				{
					temp = (rand() % 14) + 1;
				} while (temp == bingo[0][column] || temp == bingo[1][column] || temp == bingo[2][column] || temp == bingo[3][column] || temp == bingo[4][column]);
				
				bingo[row][column] = temp;
			}
			else if (column == 1)
			{
				do
				{
					temp = (rand() % 14) + 16;
				} while (temp == bingo[0][column] || temp == bingo[1][column] || temp == bingo[2][column] || temp == bingo[3][column] || temp == bingo[4][column]);

				bingo[row][column] = temp;
			}
			else if (column == 2)
			{
				do
				{
					temp = (rand() % 14) + 31;
				} while (temp == bingo[0][column] || temp == bingo[1][column] || temp == bingo[2][column] || temp == bingo[3][column] || temp == bingo[4][column]);

				bingo[row][column] = temp;
			}
			else if (column == 3)
			{
				do
				{
					temp = (rand() % 14) + 46;
				} while (temp == bingo[0][column] || temp == bingo[1][column] || temp == bingo[2][column] || temp == bingo[3][column] || temp == bingo[4][column]);

				bingo[row][column] = temp;
			}
			else
			{
				do
				{
					temp = (rand() % 14) + 61;
				} while (temp == bingo[0][column] || temp == bingo[1][column] || temp == bingo[2][column] || temp == bingo[3][column] || temp == bingo[4][column]);

				bingo[row][column] = temp;
			}
		}
	}

	printf("+-----+-----+-----+-----+-----+\n");
	printf("|--B--|--I--|--N--|--G--|--O--|\n");
	printf("+=====+=====+=====+=====+=====+\n");
	printf("|  %d  |  %d  |  %d  |  %d  |  %d  |\n", bingo[0][0], bingo[0][1], bingo[0][2], bingo[0][3], bingo[0][4]);
	printf("+-----+-----+-----+-----+-----+\n");
	printf("|  %d  |  %d  |  %d  |  %d  |  %d  |\n", bingo[1][0], bingo[1][1], bingo[1][2], bingo[1][3], bingo[1][4]);
	printf("+-----+-----+-----+-----+-----+\n");
	printf("|  %d  |  %d  |  %d  |  %d  |  %d  |\n", bingo[2][0], bingo[2][1], bingo[2][2], bingo[2][3], bingo[2][4]);
	printf("+-----+-----+-----+-----+-----+\n");
	printf("|  %d  |  %d  |  %d  |  %d  |  %d  |\n", bingo[3][0], bingo[3][1], bingo[3][2], bingo[3][3], bingo[3][4]);
	printf("+-----+-----+-----+-----+-----+\n");
	printf("|  %d  |  %d  |  %d  |  %d  |  %d  |\n", bingo[4][0], bingo[4][1], bingo[4][2], bingo[4][3], bingo[4][4]);
	printf("+-----+-----+-----+-----+-----+\n");

	printf("\n\n");

	return 0;
}