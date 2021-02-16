/*Задача 4.Дефинирайте пойнтер и опитайте да отпечатате стойността му на конзолата (%р) с printf.
Какво се визуализира?.*/
#include <stdio.h>

int main()
{
    int i = 1;
    float f = 5.5;
    char c = 'a';
    int *pi = &i;
    float *pf = &f;
    char *pch = &c;
    printf("address of *pi is %p, pointer = %d \n", &pi, *pi);
    printf("address of *pf is %p, pointer = %.2f \n", &pf, *pf);
    printf("address of *pch is %p, pointer = %c \n", &pch, *pch);
    return 0;
}