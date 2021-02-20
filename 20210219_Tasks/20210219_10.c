/*Задача 10. Направете два триъгълника с отместване.*/
#include <stdio.h>
#define SIZE 15
char field[SIZE][SIZE];
struct point
{
    int x;
    int y;
};

void clear_field(char field[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            field[i][j] = '-';
        }
    }
}

void print_field(char field[SIZE][SIZE])
{
    int i, j;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("%c", field[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void create_triangle(char field[SIZE][SIZE], struct point a, struct point b)
{
    int i, j, k;
    j = a.x;
    for (i = a.y; i <= b.y; i++)
    {
        for (k = a.x; k <= j;)
        {
            field[i][k] = '@';
            k++;
        }
        j++;
    }
}

int main(void)
{

    struct point a = {1, 5};
    struct point b = {5, 10};
    struct point c = {8, 5};
    struct point d = {13, 10};
    clear_field(field);
    create_triangle(field, a, b);
    create_triangle(field, c, d);
    print_field(field);
    return 0;
}
