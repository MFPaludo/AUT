#include <stdio.h>

int main()
{

	FILE* file_pointer = fopen("exercise.txt", "w");

	fprintf(file_pointer, "Hello File World!");

	fclose(file_pointer);
	
	printf("\n\n");
	
	return 0;
}