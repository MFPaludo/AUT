#include <stdlib.h>

struct Memory_Buffer
{
	unsigned char buffer[64];
};

struct Memory_Buffer* get_memory_block()
{
	return (malloc(sizeof(struct Memory_Buffer)));
}

int main()
{
	struct Memory_Buffer* p_buffer = 0;

	p_buffer = get_memory_block();

	for (int k = 0; k < 64; ++k)
	{
		p_buffer->buffer[k] = k;
	}

	

	return 0;
}