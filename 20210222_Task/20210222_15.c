/*Задача 15. Дефинирайте структура с 4 полета (int. char[10], double, enum),
направете масив от 20 структури и ги попълнете. Изведете масива
от структури на стандартния изход в CSV формат (
https://en.wikipedia.org/wiki/Comma separated_values ). 
Пример: prog1 > structs20.cvs*/
#include <stdio.h>
#include <string.h>

struct My_struct
{
    char string[10];
    int Inum;
    double dValue;
    enum
    {
        true,
        false
    } e;
};

int main(void)
{
    FILE *fpt;
    fpt = fopen("20210222_15.cvs", "w+");

    struct My_struct My_struct[20];

    for(int i = 0; i < 20; i++)
    {
        My_struct[i].Inum = i + 1;
        strcpy(My_struct[i].string, "Content");
        My_struct[i].dValue = 0.15 + i;
        My_struct[i].e = i % 2;
    }

    for(int i = 0; i < 20; i++)
    {
        fprintf(fpt, "%d,%s,%.2lf,%d\n", My_struct[i].Inum, My_struct[i].string, My_struct[i].dValue, My_struct[i].e);
    }

    fclose(fpt);
}