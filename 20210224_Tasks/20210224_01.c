/*Задача 1. Дефинирайте константи PI, Е, и други с помощта на макроси. Използвайте ги в кода.*/
#include <stdio.h>
#define PI 3.141592
#define E(radius) PI *radius *radius
#define NUM(a) ((a) + 1)
#define NUM1(a) ((a)*5)

int main()
{
    float result;
    result = E(5);
    printf("Area of circle is %.4f\n", result);
    int a = NUM(5);
    printf("NUM is a +1 = %d\n", a);
    int b = 6;
    printf("NUM1 is (15 + b) * 5 = %d\n", NUM1(15 + b));

    return 0;
}
