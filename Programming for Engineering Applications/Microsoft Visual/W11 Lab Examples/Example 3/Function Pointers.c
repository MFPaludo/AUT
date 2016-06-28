#include <stdio.h>

typedef void(*p_call_me)();

void print_hello()
{
	printf("Hello\n");
}

void print_goodbye()
{
	printf("Goodbye\n");
}

int main()
{
	p_call_me function_pointer = 0;

	function_pointer = print_hello;

	function_pointer();

	function_pointer = print_goodbye;

	function_pointer();

	return 0;
}