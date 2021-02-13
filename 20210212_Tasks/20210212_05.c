/*Задача 5. Разширяване на заделена памет с realloc */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = NULL;

    printf("Allocating memory for 5 int values\n");
    p = malloc(5 * sizeof(int));
    if (NULL == p)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }
    printf("Address of the allocated memory: %p\n", p);

    printf("Re-allocating memory for 15 int values\n");
    p = realloc(p, 15 * sizeof(int));
    if (NULL == p)
    {
        printf("Reallocation memory error!\n");
        exit(2);
    }
    printf("Address of rellocated memory: %p\n", p);
    free(p);
    return 0;
}