/*Задача 7. Направете функция struct point makepoint(int x, int y), която
създава две точки.*/

#include <stdio.h>

struct point
{
    int x;
    int y;
} a, b;
struct point makePoint(int x, int y)
{
    struct point NewPoint = {x, y};
    return NewPoint;
}
int main()
{
    struct point a = makePoint(1, 2);
    struct point b = makePoint(3, 4);

    printf("Point a %d, %d\n", a.x, a.y);
    printf("Point b %d, %d\n", b.x, b.y);
    return 0;
}