/*Задача9. Напишете по 2 тройни цикъла (един и същи код) за масивите.
Хайде да го изнесем във функция. */
#include <stdio.h>

int *fibonacciF(int fib[])
{
    int i;
    for (i = 2; i < 16; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
    return fib;
}
int main()
{
    int fibonacci[16];
    int i;
    int *(*fib)(int *) = &fibonacciF;
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    printf("Fibonacci series :\n");
    fib(fibonacci);
    for (i = 0; i < 16; i++)
        printf("%2d -> %d\n", i, fibonacci[i]);
    return 0;
}