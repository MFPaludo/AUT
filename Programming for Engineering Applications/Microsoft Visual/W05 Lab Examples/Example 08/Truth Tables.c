#include <stdio.h>

int main()
{
	printf("AND Truth Table:\n\n");

	printf(" a | b | a && b \n");
	printf("---+---+--------\n");
	printf(" 0 | 0 | %d \n", 0 && 0);
	printf(" 0 | 1 | %d \n", 0 && 1);
	printf(" 1 | 0 | %d \n", 1 && 0);
	printf(" 1 | 1 | %d \n", 1 && 1);
	printf("\n");

	printf("OR Truth Table:\n\n");

	printf(" a | b | a || b \n");
	printf("---+---+--------\n");
	printf(" 0 | 0 | %d \n", 0 || 0);
	printf(" 0 | 1 | %d \n", 0 || 1);
	printf(" 1 | 0 | %d \n", 1 || 0);
	printf(" 1 | 1 | %d \n", 1 || 1);
	printf("\n");

	printf("NOT Truth Table:\n\n");

	printf(" a | !a \n");
	printf("---+----\n");
	printf(" 0 | %d\n", !0);
	printf(" 1 | %d\n", !1);
	printf("\n");

	return 0;
}