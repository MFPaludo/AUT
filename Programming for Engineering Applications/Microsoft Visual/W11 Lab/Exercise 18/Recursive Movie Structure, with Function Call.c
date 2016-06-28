#include <stdio.h>

void print_movie(struct Movie movie);

struct Movie
{
	char name[30];
	char sequel[30];
	int release;
	int rotten_tomatoes;
	int is_sequel;
};

void print_movie(struct Movie movie)
{
	printf("Name: %s\n", movie.name);
	printf("Year of Release: %d\n", movie.release);
	printf("Rotten Tomatoes: %d%%\n", movie.rotten_tomatoes);
	if (movie.is_sequel)
	{
		printf("%s's sequel was %s", movie.name, movie.sequel);
	}
	else
	{
		printf("%s has no sequel, yet!", movie.name);
	}
	
	printf("\n\n");
}

int main()
{
	struct Movie jurassic_1;
		sprintf(jurassic_1.name, "Jurassic Park");
		jurassic_1.release = 1993;
		jurassic_1.rotten_tomatoes = 93;
		jurassic_1.is_sequel = 1;

	struct Movie jurassic_2;
		sprintf(jurassic_2.name, "The Lost World: Jurassic Park");
		sprintf(jurassic_1.sequel, jurassic_2.name);
		jurassic_2.release = 1997;
		jurassic_2.rotten_tomatoes = 51;
		jurassic_2.is_sequel = 1;

	struct Movie jurassic_3;
		sprintf(jurassic_3.name, "Jurassic Park III");
		sprintf(jurassic_2.sequel, jurassic_3.name);
		jurassic_3.release = 2001;
		jurassic_3.rotten_tomatoes = 50;
		jurassic_3.is_sequel = 1;

	struct Movie jurassic_world;
		sprintf(jurassic_world.name, "Jurassic Park");
		sprintf(jurassic_3.sequel, jurassic_world.name);
		jurassic_world.release = 1993;
		jurassic_world.rotten_tomatoes = 93;
		jurassic_world.is_sequel = 0;

	print_movie(jurassic_1);
	print_movie(jurassic_2);
	print_movie(jurassic_3);
	print_movie(jurassic_world);


	printf("\n\n");

	return 0;
}