#include <stdio.h>
int main()
{
	char iata[2];
	printf("Please enter the first two letters of ");
	printf("a New Zealand airport IATA code: ");
	scanf("%c%c", &iata[0], &iata[1]);

	switch (iata[0])
	{
		case 'P':
		{
				switch (iata[1])
				{
					case 'M':
					{
						printf("PMR: Palmerston North");
					}
					break;
					case 'P':
					{
						printf("PPQ: Kapiti Coast Airport");
					}
					break;
					case 'C':
					{
						printf("PCN: Picton Aerodrome");
					}
					break;
				}
				break;
		}
		case 'W':
		{
			switch (iata[1])
			{
				case 'K':
				{
					printf("WKA: Wanaka Airport");
				}
				break;
				case 'A':
				{
					printf("WAG: Wanganui Airport");
				}
				break;
				case 'L':
				{
					printf("WLG: Wellington International Airport");
				}
				break;
			}
			break;
		}
		default:
		{
			printf("Unknown IATA code!");
			break;
		}
	}

	printf("\n");

	return 0;
}