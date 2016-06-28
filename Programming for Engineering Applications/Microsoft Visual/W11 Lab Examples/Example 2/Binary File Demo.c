#include <stdio.h>

struct My_Data
{
	int whole_number;
	float real_number;
};

void save_binary_file(char* filename, struct My_Data d)
{
	FILE* fp = fopen(filename, "wb");

	fwrite(&d.whole_number, 1, sizeof(int), fp);
	fwrite(&d.real_number, 1, sizeof(float), fp);

	fclose(fp);
}

struct My_Data load_binary_file(char* filename)
{
	struct My_Data data;

	FILE* fp = fopen(filename, "rb");

	fread(&data.whole_number, 1, sizeof(int), fp);
	fread(&data.real_number, 1, sizeof(float), fp);

	fclose(fp);

	return data;
}

int main()
{
	struct My_Data data;
	data.whole_number = 47;
	data.real_number = 3.14f;
	save_binary_file("example.bin", data);

	struct My_Data loaded;
	loaded = load_binary_file("example.bin");

	printf("From file: %d\n", loaded.whole_number);
	printf("From file: %f\n", loaded.real_number);

	return 0;
}