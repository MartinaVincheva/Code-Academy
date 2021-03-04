/*Декларирайте функция, която събира две числа и връща резултата им:
int addDigit(int a, int b);
Декларирайте в мейн две променливи, дайте им стойности, подайте
променливите на функцията addDigit() и принтирайте резултата.
int main(void){
int a,b;
addDigit(а,b);
return 0;
}
Напишете тялото на функцията най
отдолу, в което се извършва
събирането:*/
#include <stdio.h>

int addDigit(int a, int b);

int main(void)
{
    int a, b;

    a = 6;
    b = 8;
    addDigit(a, b);

    return 0;
}

int addDigit(int a, int b)
{

    int res;

    res = a + b;
    printf("%d\n", res);

    return 0;
}