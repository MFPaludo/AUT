#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("isalnum('a') returns %d\n", isalnum('a'));
	printf("isalnum('1') returns %d\n", isalnum('1'));
	printf("isalnum('*') returns %d\n", isalnum('*'));
	printf("isalnum('\\0') returns %d\n", isalnum('\0'));
	printf("\n");

	printf("issalpha('b') returns %d\n", isalpha('b'));
	printf("issalpha('2') returns %d\n", isalpha('2'));
	printf("issalpha('(') returns %d\n", isalpha('('));
	printf("issalpha('\\0') returns %d\n", isalpha('\0'));
	printf("\n");

	printf("iscntrl('c') returns %d\n", iscntrl('c'));
	printf("iscntrl('3') returns %d\n", iscntrl('3'));
	printf("iscntrl(')') returns %d\n", iscntrl(')'));
	printf("iscntrl('\\0') returns %d\n", iscntrl('\0'));
	printf("\n");

	printf("isdigit('d') returns %d\n", isdigit('d'));
	printf("isdigit('4') returns %d\n", isdigit('4'));
	printf("isdigit('!') returns %d\n", isdigit('!'));
	printf("isdigit('\\0') returns %d\n", isdigit('\0'));
	printf("\n");

	printf("isgraph('e') returns %d\n", isgraph('e'));
	printf("isgraph('5') returns %d\n", isgraph('5'));
	printf("isgraph('@') returns %d\n", isgraph('@'));
	printf("isgraph('\\0') returns %d\n", isgraph('\0'));
	printf("\n");

	printf("islower('e') returns %d\n", islower('e'));
	printf("islower('5') returns %d\n", islower('5'));
	printf("islower('@') returns %d\n", islower('@'));
	printf("islower('\\0') returns %d\n", islower('\0'));

	return 0;
}