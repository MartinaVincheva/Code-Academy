/* Задача8.
Напишете прототипите на разгледаните досега функции int add(int a, int b) и int incr(int c) във файла f.h,
a телата на функциите във файла f.c. и използвайте тези функции във файла m.c,
където е разписано тялото на функцията main().
Компилирайте програмата по показания по-горе начин. */
#include <stdio.h>
#include "20210129_08_f.h"

int main(void) {
    unsigned int a, b, c;

	printf("\nPlease enter decimal number for A : ");
    scanf("%d", &a);
    printf("\nPlease enter decimal number for B : ");
    scanf("%d", &b);
    c = add(a, b);
    printf("Sum of a = %d and b = %d is equal to c = %d.\n", a, b, c);
	printf("Incremented value of c = %d is %d.\n", c, incr(c));
	return 0;
}
