/*Задача 1. Дефинирайте структура като потребителски тип.
Инициализирайте членовете на структурата, използвайки новия потребителски тип.
Отпечатайте.*/
#include <stdio.h>

typedef struct
{
    int a, b, c;
} t_StType;

int main()
{
    t_StType num = {5, 2, 10};

    printf("Numbers : %d, %d, %d\n", num.a, num.b, num.c);
    return 0;
}
