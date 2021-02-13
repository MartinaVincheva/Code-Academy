/*Задача3. Напишете функции , с помощта на които да реализирате динамичен
масив от елементи , чиято големина може да се променя по време на
изпълнение на програмата */
#include <stdio.h>
#include <stdlib.h>

int *createArray(int uNumOfElem)
{
    return malloc(NumOfElem * sizeof(int));
}

void destroyArray(int *p)
{
    free(p);
}

int main()
{
    int NumOfElem = 0;
    int *p = NULL;

    printf("Enter size of the Array: ");
    scanf("%d", &NumOfElem);
    p = createArray(NumOfElem);
    if (NULL == p)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }
    destroyArray(p);
    return 0;
}
