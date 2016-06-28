#include <stdio.h>

float rectangle_area(struct Rectangle* rec);
int is_inside(struct Rectangle* rec, struct Point* point);

struct Point
{
	float x;
	float y;
};

struct Rectangle
{
	struct Point bottom_left;
	struct Point top_right;
};

float rectangle_area(struct Rectangle* rec)
{
	return ((rec->top_right.x - rec->bottom_left.x) * (rec->top_right.y - rec->bottom_left.y));
}

int is_inside(struct Rectangle* rec, struct Point* point)
{
	if ((point->x >= rec->bottom_left.x && point->x <= rec->top_right.x) && (point->y >= rec->bottom_left.y && point->y <= rec->top_right.y)) return 1;
	else return 0;
}

int main()
{
	struct Point bottom_left;
		bottom_left.x = 0;
		bottom_left.y = 0;
	struct Point top_right;
		top_right.x = 7.124;
		top_right.y = 7.124;
	struct Point inside;
		inside.x = 5.123;
		inside.y = 6.235;
	struct Point outside;
		outside.x = 3.1235;
		outside.y = 12.1245;
	struct Rectangle rec;
		rec.bottom_left = bottom_left;
		rec.top_right = top_right;

	float area = rectangle_area(&rec);
		printf("The area of the rectangle is: %f", area);
		printf("\n\n");

	int point_inside = is_inside(&rec, &inside);
		printf("The point (%f, %f) is ", inside.x, inside.y);
			if (point_inside == 1);
			else if (point_inside == 0)
				printf("not ");
		printf("inside the rectangle");
		printf("\n\n");

	int point_outside = is_inside(&rec, &point_outside);
		printf("The point (%f, %f) is ", inside.x, inside.y);
		if (point_outside == 1);
		else if (point_outside == 0)
			printf("not ");
		printf("inside the rectangle");

	printf("\n\n");

	return 0;
}