/*Задача 9. Напишете макрос, който прави идентификатор на низ(стринг)*/
#include <stdio.h>

#define MY_STRING(x) #x

int main(void)
{
    int string = 0;
    printf("Низ с име " MY_STRING(string));
    printf("\n");
    return 0;
}