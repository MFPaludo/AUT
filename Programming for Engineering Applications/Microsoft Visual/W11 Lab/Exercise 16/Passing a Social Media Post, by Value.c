#include <stdio.h>

void print_post(struct Post post);

struct Post
{
	char name[16];
	char date[20];
	char time[8];
	int likes;
	int shares;
};

void print_post(struct Post post)
{
	printf("A social media post...\n\n");

	printf("Name: %s people\n", post.name);
	printf("Likes: %d people\n", post.likes);
	printf("Shares: %d people\n", post.shares);
	printf("Date: %s\n", post.date);
	printf("Time: %s\n", post.time);
}

int main()
{
	struct Post comment;
		sprintf(comment.name, "Secret Admirer");
		sprintf(comment.date, "5 May 2016");
		sprintf(comment.time, "11:22am");
		comment.likes = 27;
		comment.shares = 2;

	print_post(comment);

	printf("\n\n");

	return 0;
}