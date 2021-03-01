/*Задача 9. Изведете резултата от деленето на две цели
числа от тип int като double с преобразуване и без такова
#include<stdio.h>
int main() {
int iValue = 47;
int iDiv = 3;
double dfRes = 0.0;
dfRes = (double) iValue / iDiv;
printf("Value of dfResof: %lf, V/D: %lf
n",
dfRes, iValue/iDiv);
return 0;
}*/
#include <stdio.h>

int main()
{
    int iValue = 47;
    int iDiv = 3;
    double dfRes = 0.0;
    dfRes = (double)iValue / iDiv;
    printf("Value of dfRes of %d and %d, result is %lf\n", iValue, iDiv, dfRes);

    short int siValue = 13;
    int *pnValue = (int *)&siValue;
    *pnValue = 31;
    printf("%d, %ld", siValue, *pnValue);
    char chValue[8] = {'x'};
    double *pdValue = (double *)chValue;
    printf("\n0x%02X", chValue[0]);
    *pdValue = 554774367784834736.0;
    printf("\n0x%02X, %f", chValue[0], *pdValue);

    return 0;
}
