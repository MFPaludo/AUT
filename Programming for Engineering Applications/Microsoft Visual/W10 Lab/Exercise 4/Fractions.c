#include <stdio.h>

struct Fraction add_fractions(struct Fraction* f1, struct Fraction* f2);
struct Fraction subtract_fractions(struct Fraction* f1, struct Fraction* f2);
struct Fraction multiply_fractions(struct Fraction* f1, struct Fraction* f2);
struct Fraction divide_fractions(struct Fraction* f1, struct Fraction* f2);
void print_fraction(struct Fraction* f1);

struct Fraction
{
	int numerator;
	int denominator;
};

struct Fraction add_fractions(struct Fraction* f1, struct Fraction* f2)
{
	struct Fraction f3;
	f3.numerator = (((f1->numerator) * (f2->denominator)) + ((f2->numerator) * (f1->denominator)));
	f3.denominator = ((f1->denominator) * (f2->denominator));
	return f3;
}

struct Fraction subtract_fractions(struct Fraction* f1, struct Fraction* f2)
{
	struct Fraction f3;
	f3.numerator = (((f1->numerator) * (f2->denominator)) - ((f2->numerator) * (f1->denominator)));
	f3.denominator = ((f1->denominator) * (f2->denominator));
	return f3;
}

struct Fraction multiply_fractions(struct Fraction* f1, struct Fraction* f2)
{
	struct Fraction f3;
	f3.numerator = ((f1->numerator)*(f2->numerator));
	f3.denominator = ((f1->denominator)*(f2->denominator));

	return f3;
}

struct Fraction divide_fractions(struct Fraction* f1, struct Fraction* f2)
{
	struct Fraction f3;
	f3.numerator = ((f1->numerator)*(f2->denominator));
	f3.denominator = ((f1->denominator)*(f2->numerator));

	return f3;
}

void print_fraction(struct Fraction* f1)
{
	printf("%d/%d", f1->numerator, f1->denominator);
}

int main()
{
	struct Fraction f1;
	f1.numerator = 2;
	f1.denominator = 3;

	struct Fraction f2;
	f2.numerator = 5;
	f2.denominator = 8;

	printf("Function f1:\n");
	print_fraction(&f1);
	printf("\n\n");

	printf("Function f2:\n");
	print_fraction(&f2);
	printf("\n\n");

	printf("f1 + f2:\n");
	struct Fraction f3 = add_fractions(&f1, &f2);
	print_fraction(&f3);
	printf("\n\n");

	printf("f1 - f2:\n");
	f3 = subtract_fractions(&f1, &f2);
	print_fraction(&f3);
	printf("\n\n");

	printf("f1 * f2:\n");
	f3 = multiply_fractions(&f1, &f2);
	print_fraction(&f3);
	printf("\n\n");

	printf("f1 / f2:\n");
	f3 = divide_fractions(&f1, &f2);
	print_fraction(&f3);
	printf("\n\n");

	printf("\n\n");

	return 0;
}