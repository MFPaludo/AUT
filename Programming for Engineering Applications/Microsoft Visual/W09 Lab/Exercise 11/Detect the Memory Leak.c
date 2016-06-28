#include <stdio.h>
#include <stdlib.h>
#include <crtdbg.h>

int* create_array(int size)
{
	int* p_data = (int*)malloc(size * sizeof(int));

	return p_data;
}

void fill_array(int* p_array, int size)
{
	for (int k = 0; k < size; ++k)
	{
		printf("Enter a value: ");
		scanf("%d", &(p_array[k]));
	}
}

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	int* first_array = create_array(5);
	fill_array(first_array, 5);

	int* second_array = create_array(3);
	fill_array(second_array, 3);

	int* third_array = create_array(3);
	fill_array(third_array, 3);

	return 0;
}