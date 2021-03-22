/*Задача 16. Използвайки предната задача, напишете програма, която да чете
от стандартния вход CSV формат на описаната структура и да
попълва масив от 20 структури. Пример: prog2 < structs20.cvs*/
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
    fpt = fopen("20210222_15.csv", "w+");

    struct My_struct My_struct[20];

    for (int i = 0; i < 20; i++)
    {
        My_struct[i].Inum = i + 1;
        strcpy(My_struct[i].string, "Content");
        My_struct[i].dValue = 0.15 + i;
        My_struct[i].e = i % 2;
    }

    for (int i = 0; i < 20; i++)
    {
        fscanf(fpt, "%d,%s,%.2lf,%d\n", My_struct[i].Inum, My_struct[i].string, My_struct[i].dValue, My_struct[i].e);
    }
    for (int i = 0; i < 20; i++)
    {
        printf("%d,%s,%.2lf,%d\n", My_struct[i].Inum, My_struct[i].string, My_struct[i].dValue, My_struct[i].e);
    }

    fclose(fpt);
}