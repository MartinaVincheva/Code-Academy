/* Задача 10. Реализация на масив с променлива размерност
Тази задача е подобна на задача 2, където
използваме char масив. Тук може да използвате
друг тип. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arrSize;
    float *p;

    printf("Enter size of the Array: ");
    scanf("%d", &arrSize);
    p = malloc(arrSize * sizeof(float));

    if (NULL == p)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }
    printf("Enter new size of the Array: ");
    scanf("%d", &arrSize);
    p = realloc(p, arrSize * sizeof(float));

    if (NULL == p)
    {
        printf("Reallocation memory error!\n");
        exit(2);
    }
    free(p);
    return 0;
}
