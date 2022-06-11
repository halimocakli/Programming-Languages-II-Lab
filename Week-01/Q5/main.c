#include <stdio.h>
#define PI 3.14159265
#define SQUARE(x) ((x) * (x))

float AreaOfCircle(int);

int main()
{
	int radius;
	float area;

	printf("Insert the radius of circle: ");
	scanf("%d", &radius);

	area = AreaOfCircle(radius);
	printf("\nArea of the circle = %.2lf", area);

	return 0;
}

float AreaOfCircle(int radius)
{
	return PI * SQUARE(radius);
}