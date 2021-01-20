/*Задача 7.4. Да се изчисли сумата на целите числа в зададен диапазон [a, b] използване на цикъл с пред условие оператор while.*/ 
#include <stdio.h>

int main(void) {
    unsigned int a = 1 , b = 10 ;
    int sum = 0;

    while(a <= b) {
        sum += a++;
    }
    printf("Sum is %d", sum);
    return 0;
}