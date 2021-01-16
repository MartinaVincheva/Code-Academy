#include <stdio.h>

const double PI = 3.1415926535897932384626433832795;

double area(double radius)
{
	return(PI * radius * radius);
}

int main(void) 
{
	printf("Area of circle with radius %.1f is %f\n", 1.0, area(1.0));
	printf("Area of circle with radius %.1f is %f\n", 1.5, area(1.5));
	printf("Area of circle with radius %.1f is %f\n", 13.0, area(13.0));

	return 0;
}

