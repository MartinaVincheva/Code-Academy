/*Задача 10.Как работи? Дефинираме променлива “а“, дефинираме пойнтер, но още не му задаваме стойност. Отпечатайте адреса на “а”.
След това присвояваме стойност на пойнтера, като внимаваме типовете на пойнтера и променливата да са от един и същи тип.
Отпечатваме на екрана стойността на пойнтера с %р, стойността на „а“ с %d, стойността на *ptr с %d.*/
#include <stdio.h>

int main(void)
{
    int a = 1;
    int *p = NULL;
    printf("address of a is %p\n", &a);
    p = &a;
    printf("address of *p is %p, pointer = %d\n", &p, *p);
    return 0;
}