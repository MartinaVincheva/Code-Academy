/*Задача 2. Напишете функция area() без параметри. Поискайте от потребителя да въведе радиуса с помощта на функциите :printf("Enter a radius\n");scanf("%lf", &r);
Използвайте горната функция 1.за изчисляване на  площта на кръг, която написахме преди малко за да изчислите площта на кръга с този радиус и върнете резултата:  */
#include <stdio.h>

const float PI = 3.14;
float areaOfCircle(float radius);
float area();

float areaOfCircle(float radius)
{
    return PI * (radius * radius);
}
float area()
{
    float radius;
    printf("Please enter radius for the circle!\n");
    scanf(" %f", &radius);
    return areaOfCircle(radius);
}

int main()
{
    float circle = area();
    printf("Area of circle with radius which you declare is %f\n", circle);

    return 0;
}
