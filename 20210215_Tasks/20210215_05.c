/*Задача 5.Дефинирайте и инициализирайте int променлива = 34 и пойнтер към нея.
Опитайте да ги разместите, като поредност (първо да е пойнтерът, после променливата)..*/
#include <stdio.h>

int main()
{
    int *pi = NULL;
    int i = 34;
    *pi = i;
    printf("address of *pi is  %p, pointer = %d \n", &pi, *pi);
    return 0;
}