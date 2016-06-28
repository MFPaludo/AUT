#include <stdio.h>

void pass_by_value(struct Thing thing);
void pass_by_reference(struct Thing* thing);

struct Thing
{
	int a;
	short b;
	char c;
	double d;
	long e;
	float f;
};

void pass_by_value(struct Thing thing)
{
	printf("Address of thing: %p\n", &thing);
	printf("thing.a holds: '%d' and it's stored at '%p'\n", thing.a, &thing.a);
	printf("thing.b holds: '%hi' and it's stored at '%p'\n", thing.b, &thing.b);
	printf("thing.c holds: '%c' and it's stored at '%p'\n", thing.c, &thing.c);
	printf("thing.d holds: '%lf' and it's stored at '%p'\n", thing.d, &thing.d);
	printf("thing.e holds: '%li' and it's stored at '%p'\n", thing.e, &thing.e);
	printf("thing.f holds: '%f' and it's stored at '%p'\n", thing.f, &thing.f);
}

void pass_by_reference(struct Thing* thing)
{
	printf("Address of thing: %p\n", thing);
	printf("thing.a holds: '%d' and it's stored at '%p'\n", thing->a, &thing->a);
	printf("thing.b holds: '%hi' and it's stored at '%p'\n", thing->b, &thing->b);
	printf("thing.c holds: '%c' and it's stored at '%p'\n", thing->c, &thing->c);
	printf("thing.d holds: '%lf' and it's stored at '%p'\n", thing->d, &thing->d);
	printf("thing.e holds: '%li' and it's stored at '%p'\n", thing->e, &thing->e);
	printf("thing.f holds: '%f' and it's stored at '%p'\n", thing->f, &thing->f);
}

int main()
{
	struct Thing thing;
	thing.a = 1;
	thing.b = 5;
	thing.c = 'a';
	thing.d = 3.095;
	thing.e = 5;
	thing.f = 7.124;

	printf("Address of thing: %p\n", &thing);
	printf("thing.a holds: '%d' and it's stored at '%p'\n", thing.a, &thing.a);
	printf("thing.b holds: '%hi' and it's stored at '%p'\n", thing.b, &thing.b);
	printf("thing.c holds: '%c' and it's stored at '%p'\n", thing.c, &thing.c);
	printf("thing.d holds: '%lf' and it's stored at '%p'\n", thing.d, &thing.d);
	printf("thing.e holds: '%li' and it's stored at '%p'\n", thing.e, &thing.e);
	printf("thing.f holds: '%f' and it's stored at '%p'\n", thing.f, &thing.f);

	printf("\n");

	printf("Calling pass_by_value:\n");
	pass_by_value(thing);

	printf("\n");

	printf("Calling pass_by_reference:\n");
	pass_by_reference(&thing);

	printf("\n\n");

	return 0;
}