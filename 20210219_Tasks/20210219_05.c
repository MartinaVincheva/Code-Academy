/*Задача 5. а) Направете поле 15 на 15, като принтирате тирета в конзолата.
b) Направете точка а(3, 4), като на това място принтирате @
c) Направете точка b(7, 10), като на това място принтирате @
d) Попълнете правоъгълника с @ */
#include <stdio.h>
#define SIZE 15
struct point
{
    int x;
    int y;
};
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
int main(void)
{
    char field[SIZE][SIZE];
    int i, j;
    struct point a = {3, 4};
    struct point b = {7, 10};

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            field[i][j] = '-';
        }
    }
    printf("Field filled with '-':\n");
    print_field(field);

    field[a.y][a.x] = 'a';
    field[b.y][b.x] = 'b';
    printf("Field filled with '-' and dots a and b :\n");
    print_field(field);
    j = a.x;
    for (i = a.y; i <= b.y; i++)
    {
        for (j = a.x; j <= b.x; j++)
        {
            field[i][j] = '@';
        }
    }
    printf("Field with rectangle from '@':\n");
    print_field(field);
    return 0;
}
