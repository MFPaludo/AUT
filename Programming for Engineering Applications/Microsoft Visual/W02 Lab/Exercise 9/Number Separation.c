#include <stdio.h>

int main()
{
	int input = 0;
	printf("Please enter a five digit number:");
	scanf("%d", &input);
	printf("\n");

	//Example: 68573
	int first = input / 10000;
		//It returns the last number (6)
	int second = (input / 1000) - (first * 10);
		//I know the brackets are not necessary, but it looks better for me this way
		//(input/10000) will return the two last numbers (68)
		//Now our first number is on the tens, so we can just multiply it by 10 and subtract from the result
	int third = (input / 100) - (second * 10) - (first * 100);
		//Since the program has a logical pattern, it can do automatically with any number, but I couldn't think of how to do it yet
		//It will probably use an if and a while to generate the variables
		//if, for, while and switch may be used
		//to print the variables use a switch inside another structure
	int fourth = (input / 10) - (third * 10) - (second * 100) - (first * 1000);
	int fifth = (input)-(fourth * 10) - (third * 100) - (second * 1000) - (first * 10000);

	printf("%d...%d...%d...%d...and...%d", first, second, third, fourth, fifth);
	printf("\n\n");
}