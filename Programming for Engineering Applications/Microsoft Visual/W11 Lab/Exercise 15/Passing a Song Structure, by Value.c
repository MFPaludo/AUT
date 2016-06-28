#include <stdio.h>

void print_song(struct Song song);

struct Song
{
	char name[30];
	int runtime_seconds;
	int likes;
	int dislikes;
};

void print_song(struct Song song)
{
	printf("A song...\n\n");

	printf("Name: %s\n", song.name);
	printf("Runtime: %d seconds\n", song.runtime_seconds);
	printf("Likes: %d thumbs up\n", song.likes);
	printf("Dislikes: %d thumbs down\n", song.dislikes);
}

int main()
{
	struct Song p1_theme_music;
		sprintf(p1_theme_music.name, "COMP500/ENSE501 Remix");
		p1_theme_music.runtime_seconds = 250;
		p1_theme_music.likes = 105;
		p1_theme_music.dislikes = 315;

	print_song(p1_theme_music);

	printf("\n\n");

	return 0;
}