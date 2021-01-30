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
    unsigned int a, b, c, d;

	printf("\nPlease enter decimal number for A : ");
    scanf("%d", &a);
    printf("\nPlease enter decimal number for B : ");
    scanf("%d", &b);
    printf("\nResult of NOK is : %d ", NOK(a, b));

    printf("\nAbsolute value -5 = %d ", AbsoluteValue(c,d));
}

int NOK(int a, int b) {
    return (0 == b) ? a : NOK(b, a % 2) ;
}
int AbsoluteValue(int c, int d) {
    int c= -5;
    int d = -2.5;
    int absolut;
    if (c >=0){
        return c;
    } else {
        absolut = c;
        return absolut;
    }

}

/*int f3(int c) {
    return (c * c);
}*/

