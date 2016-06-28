#include <stdio.h>

int main()
{
	int n[4] = { 0, 0, 0, 0 };
	char t[4] = { 'a', 'b', 'c', '\0' };

	// Print out the arrays:
	printf("n, each element: ");
	printf("%d %d %d %d\n", n[0], n[1], n[2], n[3]);
	printf("t, each element: ");
	printf("%c %c %c %c\n", t[0], t[1], t[2], t[3]);
	printf("t, as C-String: %s\n", t);
	
	printf("\nNext... assigning ");
	printf("to each element in the arrays...\n\n");
	
	// Assign to each element in the n array:
	n[0] = 15;
	n[1] = 25;
	n[2] = 35;
	n[3] = 45;
	
	// Assign to each element in the t array:
	t[0] = 'S';
	t[1] = 'D';
	t[2] = 'H';
	t[3] = '\0';
	
	// Print out the arrays again:
	printf("n, each element: ");
	printf("%d %d %d %d\n", n[0], n[1], n[2], n[3]);
	printf("t, each element: ");
	printf("%c %c %c %c\n", t[0], t[1], t[2], t[3]);
	
	printf("t, as C-String: %s\n", t);
	
	return 0;
}