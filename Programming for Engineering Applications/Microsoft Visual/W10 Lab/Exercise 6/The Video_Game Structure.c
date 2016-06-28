#include <stdio.h>

void print_video_game_details(struct Video_Game* game1);

struct Video_Game
{
	int in_app_purchase;
	int age_limit;
	int year_release;
	float price;
	char title[100];
	char genre[100];
	char developer[100];
	char plataform[200];
};

void print_video_game_details(struct Video_Game* game1)
{
	printf("Title: %s\n", game1->title);
	printf("Genre: %s\n", game1->genre);
	printf("Developer: %s\n", game1->developer);
	printf("Plataform: %s\n", game1->plataform);
	printf("Price: %f\n", game1->price);
	printf("Lower Age Limit: %d\n", game1->age_limit);
	printf("Year of release: %d\n", game1->year_release);
	printf("In-app Purchase: ");
	if (game1->in_app_purchase) printf("Yes");
	else printf("No");
	
	printf("\n\n");
}

int main()
{
	struct Video_Game game1;
	sprintf(game1.title, "The Elder Scrolls V: Skyrim");
	sprintf(game1.genre, "Action RPG");
	sprintf(game1.developer, "Bethesda Studios");
	sprintf(game1.plataform, "PlayStation 3, Xbox 360, Microsoft Windows");
	game1.price = 23.99;
	game1.age_limit = 13;
	game1.year_release = 2011;
	game1.in_app_purchase = 0;

	struct Video_Game game2;
	sprintf(game2.title, "Fallout 4");
	sprintf(game2.genre, "Action RPG");
	sprintf(game2.developer, "Bethesda Studios");
	sprintf(game2.plataform, "PlayStation 4, Xbox One, Microsoft Windows");
	game2.price = 99.95;
	game2.age_limit = 18;
	game2.year_release = 2015;
	game2.in_app_purchase = 0;

	struct Video_Game game3;
	sprintf(game3.title, "H.E.R.O.");
	sprintf(game3.genre, "Plataform");
	sprintf(game3.developer, "Activision");
	sprintf(game3.plataform, "Apple II, Atari 2600, Atari 5200, 8 bits Atari Family, Commodore 64, ColecoVision, MSX, ZX Spectrum, SG-1000");
	game3.price = 294.32;
	game3.age_limit = 0;
	game3.year_release = 1984;
	game3.in_app_purchase = 1;

	print_video_game_details(&game1);
	print_video_game_details(&game2);
	print_video_game_details(&game3);

	printf("\n\n");

	return 0;
}