/*Задача 6. Напишете структура с потребителски тип key_t, която
съдържа символен низ и число.*/
#include <stdio.h>
#include <string.h>

typedef struct
{
    char s[10];
    int a;
} key_t;

int main()
{
    key_t num;
    num.a = 5;
    strcpy(num.s, "Coca-Cola");

    printf("%d, %s\n", num.a, num.s);
    return 0;
}
