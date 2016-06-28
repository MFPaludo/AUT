#include <stdio.h>
#include <math.h>

double compute_distance3d(struct Point3D* p1, struct Point3D* p2);

struct Point3D
{
	double x;
	double y;
	double z;
};

double compute_distance3d(struct Point3D* p1, struct Point3D* p2)
{
	return (sqrt((pow(((p2->x) - (p1->x)), (2))) + (pow(((p2->y) - (p1->y)), (2))) + (pow(((p2->z) - (p1->z)), (2)))));
}

int main()
{
	struct Point3D p1;
	p1.x = 1;
	p1.y = 2;
	p1.z = 3;

	struct Point3D p2;
	p2.x = 4;
	p2.y = 5;
	p2.z = 6;

	double distance3d = compute_distance3d(&p1, &p2);

	printf("The 3d distance between p1(%f, %f, %f) and p2 (%f, %f, %f) is: %f.",p1.x, p1.y, p1.z, p2.x, p2.y, p2.z, distance3d);

	printf("\n\n");

	printf("Enter data for 2 3D points:\n");

	printf("p1 x: ");
	scanf("%lf", &p1.x);
	printf("p1 y: ");
	scanf("%lf", &p1.y);
	printf("p1 z: ");
	scanf("%lf", &p1.z);

	printf("\n");

	printf("p2 x: ");
	scanf("%lf", &p2.x);
	printf("p2 y: ");
	scanf("%lf", &p2.y);
	printf("p2 z: ");
	scanf("%lf", &p2.z);

	printf("\n");

	distance3d = compute_distance3d(&p1, &p2);

	printf("The 3d distance between p1(%f, %f, %f) and p2 (%f, %f, %f) is: %f.", p1.x, p1.y, p1.z, p2.x, p2.y, p2.z, distance3d);

	printf("\n\n");

	return 0;
}