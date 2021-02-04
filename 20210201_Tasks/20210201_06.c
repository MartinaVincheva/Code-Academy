/* Задача 6. Напишете функция, която изчислява произведението на числата от 1 до 30. */
#include <stdio.h>

double Mult(int endNumber) {
    int i;
    double multiply = 1;

    for(i = 1; i <= endNumber; i++) {
        multiply = multiply * i;
    }
    return multiply;    
}

int main() {
    printf("Multiply from 1 to 30: %.0f\n", Mult(30));
}