#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	printf("Enter a (0 for false, 1 for true): ");
	scanf("%d", &a);
	printf("Enter b (0 for false, 1 for true): ");
	scanf("%d", &b);
	printf("Enter c (0 for false, 1 for true): ");
	scanf("%d", &c);

	int not_a = !a;
	int not_b = !b;
	int not_c = !c;

	int a_and_b = a && b;
	int a_and_c = a && c;
	int b_and_c = b && c;
	int a_and_b_and_c = a && b && c;

	int a_or_b = a || b;
	int a_or_c = a || c;
	int b_or_c = b || c;
	int a_or_b_or_c = a || b || c;

	int a_xor_b = (a || b) && !(a && b);
	int a_xor_c = (a || c) && !(a && c);

	printf("not_a is %d\n", not_a);
	printf("not_b is %d\n", not_b);
	printf("not_c is %d\n", not_c);

	printf("a_and_b is %d\n", a_and_b);
	printf("a_and_c is %d\n", a_and_c);
	printf("b_and_c is %d\n", b_and_c);
	printf("a_and_b_and_c is %d\n", a_and_b_and_c);

	printf("a_or_b is %d\n", a_or_b);
	printf("a_or_c is %d\n", a_or_c);
	printf("b_or_c is %d\n", b_or_c);
	printf("a_or_b_or_c is %d\n", a_or_b_or_c);

	printf("a_xor_b is %d\n", a_xor_b);
	printf("a_xor_c is %d\n", a_xor_c);
	return 0;
}