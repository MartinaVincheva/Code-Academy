/*Задача2. Добавете към горния код функции за умножение и деление. */
#include <stdio.h>
#include <stdlib.h>
int fnPlus(int nA, int nB)
{
    return (nA + nB);
}
int fnMinus(int nA, int nB)
{
    return (nA - nB);
}
int fnMultyply(int nA, int nB)
{
    return (nA * nB);
}
int fnDevide(int nA, int nB)
{
    return (nA / nB);
}
int main(int argc, char *argv[])
{
    int (*pfCalc)(int, int) = NULL;
    if (argc < 4)
    {
        printf("\nUsage : %s +/- arg1 arg2\n", argv[0]);
    }
    else if ('-' == argv[2][0])
    {
        pfCalc = fnMinus;
    }
    else if ('+' == argv[2][0])
    {
        pfCalc = fnPlus;
    }
    else if ('x' == argv[2][0])
    {
        pfCalc = fnMultyply;
    }
    else if ('/' == argv[2][0])
    {
        pfCalc = fnDevide;
    }
    (NULL == pfCalc) ? 0 : printf("\nResult : %d\n", (*pfCalc)(atoi(argv[2]), atoi(argv[3])));
    return 0;
}