#include <stdio.h>

void do_action(int repeat_count)
{
	for (int i = 0; i < repeat_count; ++i)
	{
		printf("Action %d\n", i);
	}
}

int query_for_number()
{
	int number = 0;
	scanf("%d", &number);

	return number;
}

void print_prompt()
{
	printf("> ");
}

void print_quit_reminder()
{
	printf("To quit, press Ctrl-C...\n\n");
}

int main()
{
	while (1)
	{
		print_quit_reminder();
		print_prompt();

		int num = query_for_number();
		do_action(num);
	}

	return 0;
}