#include <stdio.h>

int main()
{
	printf("An unsigned char is ");
	printf("%d bytes in size.\n", sizeof(unsigned char));
	printf("A signed char is ");
	printf("%d bytes in size. \n\n", sizeof(signed char));

	printf("An unsigned short is ");
	printf("%d bytes in size.\n", sizeof(unsigned short));
	printf("A signed short is ");
	printf("%d bytes in size. \n\n", sizeof(signed short));

	printf("An unsigned int is ");
	printf("%d bytes in size.\n", sizeof(unsigned int));
	printf("A signed int is ");
	printf("%d bytes in size. \n\n", sizeof(signed int));

	printf("An unsigned long is ");
	printf("%d bytes in size.\n", sizeof(unsigned long));
	printf("A signed long is ");
	printf("%d bytes in size. \n\n", sizeof(signed long));

	printf("A float is ");
	printf("%d bytes in size.\n", sizeof(float));

	printf("A double is ");
	printf("%d bytes in size.\n", sizeof(double));

	return 0;
}