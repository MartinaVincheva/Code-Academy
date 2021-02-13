/*Задача4. Заделяне и освобождаване на памет malloc, free. 
Заделете динамично памет за масив и попълнете елементите */
#include <stdio.h>
#include <stdlib.h>

int *createArray(int *NumOfElem)
{
    printf("Enter size of the Array: ");
    scanf("%d", NumOfElem);
    return malloc(*NumOfElem * sizeof(int));
}

void fillArray(int *p, int NumOfElem)
{
    for (int i = 0; i < NumOfElem; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", (p + i));
    }
}

void printArray(int *p, int NumOfElem)
{
    printf("You've entered array with %d elements:\n", NumOfElem);
    for (int i = 0; i < NumOfElem; i++)
        printf("Element %d value = %d\n", i, p[i]);
}

void destroyArray(int *p)
{
    free(p);
}

int main()
{
    int NumOfElem = 0;
    int *p = NULL;

    p = createArray(&NumOfElem);
    if (NULL == p)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }
    fillArray(p, NumOfElem);
    printArray(p, NumOfElem);
    destroyArray(p);
    return 0;
}
