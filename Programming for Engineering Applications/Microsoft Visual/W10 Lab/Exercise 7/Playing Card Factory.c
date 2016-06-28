#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

struct Playing_Card card_factory();
void print_playing_card(struct Playing_Card card);

struct Playing_Card
{
	int rank;
	int suit;
};

struct Playing_Card card_factory()
{
	srand(time(0));

	struct Playing_Card card;
	card.rank = (rand() % 13) + 1;
	card.suit = (rand() % 3);

	//assert(card);

	return card;
}

void print_playing_card(struct Playing_Card card)
{
	printf("Printing playing card:\n");
	printf("Rank: ");
		if (card.rank == 1) printf("Ace");
		else if (card.rank == 11) printf("Jack");
		else if (card.rank == 12) printf("Queen");
		else if (card.rank == 13) printf("King");
		else printf("%d", card.rank);
	printf("\n");
	printf("Suit: ");
		if (card.suit == 0) printf("Diamonds");
		else if (card.suit == 1) printf("Hearts");
		else if (card.suit == 2) printf("Clubs");
		else printf("Spades");
	printf("\n\n");
}

int main()
{
	struct Playing_Card card[5];

	card[0] = card_factory();
	card[1] = card_factory();
	card[2] = card_factory();
	card[3] = card_factory();
	card[4] = card_factory();

	print_playing_card(card[0]);
	print_playing_card(card[1]);
	print_playing_card(card[2]);
	print_playing_card(card[3]);
	print_playing_card(card[4]);

	printf("\n\n");

	return 0;
}