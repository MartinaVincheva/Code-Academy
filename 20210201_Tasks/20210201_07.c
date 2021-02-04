/* Задача 7. Напишете функция, която прави същото, както в задача 6, но е рекурсивна. */
#include <stdio.h>

double Mult(int endNumber) {
    if (endNumber == 1)
        return 1;
    return endNumber * Mult(endNumber - 1);    
}

int main() {
    printf("Multiply from 1 to 30: %.0f\n", Mult(30));
}