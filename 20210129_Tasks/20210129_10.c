/* Задача 10. Напишете програма на С, която съдържа 3 функции, изнесете прототипите им в отделен .h файл.
1.Първата функция да калкулира най-малко общо кратно на две положителни числа.
2.Втората функция връща абсолютна стойност на числата (положителната стойност на числата)
a.      Трябва да може да приеме като параметър float  и да върне float
b.      Тествайте с инт и float

3.      Напишете функция, която калкулира корен квадратен от число
a.      Проверете дали резултатът е отрицателно число и върнете -1.
b.      Използвайте втората си функция, за да обърнете числото в положително и да намерите корен квадратен от него. */
#include <stdio.h>
#include <math.h>
#include "20210129_10.h"

int main(void) {
    unsigned int a, b;

	printf("\nPlease enter decimal number for A : ");
    scanf("%d", &a);
    printf("\nPlease enter decimal number for B : ");
    scanf("%d", &b);
    printf("\nResult of NOK is : %d ", NOK(a, b));

    printf("\nAbsolute value of -5 = %.2f ", AbsoluteValue(-5));
    printf("\nAbsolute value of 5 = %.2f ", AbsoluteValue(5));
    printf("\nAbsolute value of -5.1 = %.2f ", AbsoluteValue(-5.1));
    printf("\nAbsolute value of 5.2 = %.2f ", AbsoluteValue(5.2));

    printf("\nSquare root of 2 is %.6f ", sqaureRoot(2));
    printf("\nSquare root of -2 is %.6f ", sqaureRoot(-2));
}

int NOK(int a, int b) {
    int i;

    for (i = a < b ? b : a; i < a * b; i++) {
        if (i % a == 0 && i % b == 0) {
            return i;
        }
    }
    return a * b;
}

float AbsoluteValue(float num) {
    return num < 0 ? -num : num;
}

float sqaureRoot(float num) {
    if (num < 0) {
        return(-1);
    } else {
        return(sqrt(num));
    }
}

