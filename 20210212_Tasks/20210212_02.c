/*Задача2. Разширяване на заделена памет с realloc */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned uSize = 0;
    int *p = NULL;

    printf("Enter size of the Array: ");
    scanf("%u", &uSize);
    p = (int *)malloc(uSize * sizeof(int));
    if (NULL == p)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }
    printf("Addresses of allocated memory : %p\n", p);
    printf("Enter new size of the array: ");
    scanf("%u", &uSize);
    p = realloc(p, uSize * sizeof(int));
    if (NULL == p)
    {
        printf("Reallocation memory error!\n");
        exit(2);
    }
    printf("Addresses of rellocated memory: %p\n", p);
    free(p);
    return 0;
}