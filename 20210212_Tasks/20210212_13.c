/* Задача 13.Ако
x е реално число , а y естествено , то степен се
дефинира по следния начин : x на степен y = x.x. x.... .x (y пъти )
Когато y < 0, то x на y = 1 / x y . Валидни са свойствата (x 0):
x y = x y 1 .x x y = x y+1/x x y1+y2 = x y1 .x y2 x y1 .y2 = (x y1 )
y2
Тривиалната реализация за пресмятане на x y е чрез
извършване на y последователни умножения */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, power = 1;
    int i, y;

    printf("Please enter x: ");
    scanf("%f", &x);
    printf("Please enter y: ");
    scanf("%d", &y);
    for (i = 0; i < abs(y); i++)
    {
        power = power * x;
    }
    if (y < 0)
        power = 1 / power;
    printf("x^y = %f\n", power);
    return 0;
}