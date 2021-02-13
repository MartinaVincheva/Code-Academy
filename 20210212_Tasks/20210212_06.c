/*Задача 6. Заделете динамично с malloc памет за char* buffer с размер size = 2,
въвеждайте символи от конзолата с getchar() ги четете, записвайте ги в
буфера. Увеличавайте размера на буфера преди да се препълни с realloc().
Прекъснете цикъла с Ctrl + Z. Принтирайте буфера и освободете паметта. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 2, idx = 0;
    char *buffer = malloc(size);

    printf("Enter array of letters : ");
    do
    {
        buffer[idx] = getchar();
        if (buffer[idx] == EOF)
            break;
        idx++;
    } while (NULL != (buffer = realloc(buffer, size + idx)));
    buffer[idx] = '\0';
    printf("Array of letters is full with the following letters : %s.\n", buffer);
    free(buffer);
    return 0;
}