#include <stdio.h>

int main()
{
	char input;

	printf("Simple yes/no question? ");
	scanf("%c", &input);

	switch (input)
		{
		case 'Y': //Fall Through.
		case 'y':
		{
			printf("User input YES\n");
			break;
		}
		case 'n': //Fall Through.
		case 'N':
		{
			printf("User input NO\n");
			break;
		}
		default:
		{
			printf("User input does not match ");
			printf("the requirements!\n\n");
			printf("Should be Y, y, N, or n.\n");
			break;
		}
	}

	return 0;
}