/*Задача 6.Задача 6. Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b). */
#include <stdio.h>

void my_swap(int *ptr_a, int *ptr_b) {
    *ptr_a = *ptr_a + *ptr_b;
    *ptr_b = *ptr_a - *ptr_b;
    *ptr_a = *ptr_a - *ptr_b;
}

int main() {
    int a = 5, b = 10;

    my_swap(&a, &b);
    printf("a=%d, b=%d\n", a, b);
}