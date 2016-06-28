#include <stdio.h>

void count_categories(char* p_cstring, int* p_upper_count, int* p_lower_count, int* p_digit_count);

int main()
{
	char buffer1[] = "Hello Programming 1 Students";
	char buffer2[] = "Learn to program using arrays and pointers!";
	char buffer3[] = "If debugging is the process of removing software bugs, then programming must be the process of putting them in.";
	char buffer4[] = "I am error.—random fat dude in The Legend of Zelda 2";

	int upper_count = 0;
	int lower_count = 0;
	int digit_count = 0;

	count_categories(buffer1, &upper_count, &lower_count, &digit_count);
	printf("[%s]\n", buffer1);
	printf("upper: %d, lower: %d, digit: %d\n", upper_count, lower_count, digit_count);
	printf("\n");

	count_categories(buffer2, &upper_count, &lower_count, &digit_count);
	printf("[%s]\n", buffer2);
	printf("upper: %d, lower: %d, digit: %d\n", upper_count, lower_count, digit_count);
	printf("\n");

	count_categories(buffer3, &upper_count, &lower_count, &digit_count);
	printf("[%s]\n", buffer3);
	printf("upper: %d, lower: %d, digit: %d\n", upper_count, lower_count, digit_count);
	printf("\n");

	count_categories(buffer4, &upper_count, &lower_count, &digit_count);
	printf("[%s]\n", buffer4);
	printf("upper: %d, lower: %d, digit: %d\n", upper_count, lower_count, digit_count);
	printf("\n");

	return 0;
}