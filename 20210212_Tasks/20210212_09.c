/* Задача 9. Разширяване на заделена памет с realloc
Напишете програма, която пита потребителя колко
памет иска и заделя съответния блок памет. След
това попитайте потребителя за нов размер и
използвайте функция, която прави това. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arrSize;
    char *p;

    printf("Enter size of the Array: ");
    scanf("%d", &arrSize);
    p = malloc(arrSize * sizeof(char));

    if (NULL == p)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }
    printf("Enter new size of the Array: ");
    scanf("%d", &arrSize);
    p = realloc(p, arrSize * sizeof(char));

    if (NULL == p)
    {
        printf("Reallocation memory error!\n");
        exit(2);
    }
    free(p);
    return 0;
}
