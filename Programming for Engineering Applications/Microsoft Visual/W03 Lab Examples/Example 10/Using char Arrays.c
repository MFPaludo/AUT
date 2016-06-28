#include <stdio.h>

int main()
{
	char username[10];
	char pin[5];
	
	printf("Username (9 chars max!): ");
	scanf("%9s", username);
	
	int index_count = 0;
	printf("\n\nEnter your PIN (4 symbols),");
	printf(" one symbol at a time...\n\n");
	printf("First symbol: ");
	scanf(" %c", &pin[index_count]);
	++index_count;
	
	printf("Second symbol: ");
	scanf(" %c", &pin[index_count]);
	++index_count;
	
	printf("Third symbol: ");
	scanf(" %c", &pin[index_count]);
	++index_count;
	
	printf("Fourth symbol: ");
	scanf(" %c", &pin[index_count]);
	++index_count;
	
	pin[index_count] = '\0';
	
	printf("\n\n");
	
	printf("Username is: %s\n\n", username);
	printf("PIN is: %s\n\n", pin);
	
	printf("ASCII for PIN: ");
	printf("%d, %d, ", pin[0], pin[1]);
	printf("%d, %d\n\n", pin[2], pin[3]);
	
	return 0;
}