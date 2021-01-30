/*Задача1.Направете глобалнаконстантаpi = 3.14, кактоправихмев предишнияурок. Напишете функция, коятоизчислява площта на кръг, на която като параметър подаваме радиуса и връщаме площта на кръга.
Използвайте глобалната константа pi,за да извършите изчисленията. 
Извикайте функцията в main() и покажетерезултата. */
#include <stdio.h>

const float PI = 3.14;
float areaOfCircle(float radius);

int main(void) {
    float radius ;
	printf("Please enter radius for the circle!\n");
    scanf("%f", &radius);
    printf("Area of circle with the radius which you declare is %f\n", areaOfCircle(radius));
	
	return 0;
}

float areaOfCircle(float radius){

	return PI *( radius * radius);
}
