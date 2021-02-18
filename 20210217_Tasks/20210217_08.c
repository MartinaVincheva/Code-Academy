/*Задача8. Напишете програма, която да представя Реда на Фибоначи в масив.
Ред на Фибоначи: Всяко число е равно на сумата на двете преди него.
Първите 2 са 0 и 1. */
#include <stdio.h>

int main()
{
    int fibonacci[16];
    int i;
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (i = 2; i < 16; i++)
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    printf("Fibonacci series :\n");
    for (i = 0; i < 16; i++)
        printf("%2d -> %d\n", i, fibonacci[i]);
    return 0;
}