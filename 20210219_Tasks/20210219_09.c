/*Задача 9. Направете функця add(), която събира две точки.*/
#include <stdio.h>
struct point
{
    int x;
    int y;
};

void addPoints(struct point *a, struct point *b, struct point *c)
{
    c->x = a->x + b->x;
    c->y = a->y + b->y;
}
int main()
{
    struct point a = {0, 5}, b = {3, 2}, c;
    addPoints(&a, &b, &c);
    printf("Resulting point is %d,%d\n", c.x, c.y);
    return 0;
}