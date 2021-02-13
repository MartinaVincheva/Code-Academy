/*Задача 7. Заделяне на памет с calloc.
Заделете динамична памет за масив от елементи, като
извикате функция, която нулира заделената памет. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char elementCount = 10;
    char *buffer = calloc(elementCount, sizeof(char));

    free(buffer);
    return 0;
}