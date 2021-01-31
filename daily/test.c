#include <stdio.h>

const float PI = 3.14;


float area(float radius){

	return PI *( radius * radius);
}

int main(void) {
    float radius ;
	printf("Please enter radius for the circle!\n");
    scanf("%f", &radius);
    printf("Area of circle with the radius which you input is %f\n", area);
	
	return 0;
}

