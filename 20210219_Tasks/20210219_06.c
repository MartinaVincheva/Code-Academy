/*Задача 6. Направете по подобен начин триъгълник:*/
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
    int i, j, k;
    struct point a = {5, 6};
    struct point b = {5, 12};
    struct point c = {11, 12};

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
    field[c.y][c.x] = 'c';
    printf("Field filled with '-' and dots a, b and c:\n");
    print_field(field);
    j = a.x;
    for (i = a.y; i <= c.y; i++)
    {
        for (k = a.x; k <= j;)
        {
            field[i][k] = '@';
            k++;
        }
        j++;
    }
    printf("Field with triangle from '@':\n");
    print_field(field);
    return 0;
}
