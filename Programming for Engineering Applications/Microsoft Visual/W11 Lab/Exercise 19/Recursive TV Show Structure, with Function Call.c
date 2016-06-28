#include <stdio.h>

void print_season(struct Tv_Season season);

struct Tv_Season
{
	char premier_date[30];
	char season_finale_date[30];
	int season;
	int number_of_episodes;
	int is_next_season;
};

void print_season(struct Tv_Season season)
{
	printf("Season: %d\n", season.season);
	printf("Number of Episodes: %d\n", season.number_of_episodes);
	printf("Premier Date: %s\n", season.premier_date);
	printf("Season Finale Date: %s\n", season.season_finale_date);
	
	if (season.is_next_season)
	{
		printf("The next season was...\n");
	}
	else
	{
		printf("Then the show was cancelled.");
	}
}

int main()
{
	struct Tv_Season season_1;
		season_1.season = 1;
		season_1.number_of_episodes = 13;
		sprintf(season_1.premier_date, "14 January 2005");
		sprintf(season_1.season_finale_date, "1 April 2005");
		season_1.is_next_season = 1;

	struct Tv_Season season_2;
		season_2.season = 2;
		season_2.number_of_episodes = 20;
		sprintf(season_2.premier_date, "15 July 2005");
		sprintf(season_2.season_finale_date, "10 March 2006");
		season_2.is_next_season = 1;

	struct Tv_Season season_3;
		season_3.season = 3;
		season_3.number_of_episodes = 20;
		sprintf(season_3.premier_date, "6 October 2006");
		sprintf(season_3.season_finale_date, "25 March 2007");
		season_3.is_next_season = 1;

	struct Tv_Season season_4;
		season_4.season = 4;
		season_4.number_of_episodes = 20;
		sprintf(season_4.premier_date, "4 April 2008");
		sprintf(season_4.season_finale_date, "20 March 2009");
		season_4.is_next_season = 0;

	print_season(season_1);
	print_season(season_2);
	print_season(season_3);
	print_season(season_4);

	printf("\n\n");

	return 0;
}