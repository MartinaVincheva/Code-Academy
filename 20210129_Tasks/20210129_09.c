/* Задача 9. Напишете три функции, които да правят изчисление по ваш избор и да се извикват по следния начин:
Main вика Ф1;
Ф1 вика Ф2;
Ф2 вика Ф3;
Изнесете прототипите им в отделен .h файл */
#include <stdio.h>
#include "20210129_09.h"

int main(void) {
    unsigned int a, b, c;

	printf("\nPlease enter decimal number for A : ");
    scanf("%d", &a);
    printf("\nPlease enter decimal number for B : ");
    scanf("%d", &b);
    printf("\nResult of F1((a + b ^ 2) ^ 2) is : %d ", f1(a, b));
}

int f1(int a, int b) {
    return f2(a, b * b);
}

int f2(int a, int b) {
    return(f3(a + b));
}

int f3(int c) {
    return (c * c);
}
