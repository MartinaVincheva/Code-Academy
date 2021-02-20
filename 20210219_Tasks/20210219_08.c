/*Задача 8. Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и
крайна точка (15, 15). Запълнете пространството между тях с тирета.*/
#include <stdio.h>

struct point
{
    int x;
    int y;
};
struct rect
{
    struct point one;
    struct point two;
} screen;

struct point makePoint(int x, int y)
{
    struct point NewPoint = {x, y};
    return NewPoint;
}

int main(void)
{
    int i, j;
    struct point a = makePoint(0, 0);
    struct point b = makePoint(15, 15);
    struct rect screen = {a, b};

    for (int i = a.y; i < b.y; i++)
    {
        for (int j = a.x; j < b.x; j++)
        {
            printf("- ");
        }
        printf("\n");
    }
    return 0;
}
