/*Задача 8. Заделяне на памет от стека с alloca.
Заделете памет в стека (няма нужда от free()) */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char elementCount = 10;
    char *buffer = alloca(elementCount);
    
    if (NULL == buffer)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }
    return 0;
}