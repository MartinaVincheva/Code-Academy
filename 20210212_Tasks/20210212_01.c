/*Задача1. Да се направи програма , която заделя динамичен масив с брой елементи
зададени от потребителя . За всеки елемент от масива се очаква потребителят да въведе
цяло и число и след това се изчислява сумата на всички елементи от масива */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned uNumOfElem = 0;
    int *p = NULL;
    int sum = 0;

    printf("Enter size of the Array: ");
    scanf("%d", &uNumOfElem);
    p = (int *)malloc(uNumOfElem * sizeof(int));
    for (int i = 0; i < uNumOfElem; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", (p + i));
    }
    for (int i = 0; i < uNumOfElem; i++)
    {
        sum += *(p + i);
    }
    printf("The sum is : %d\n", sum);
    free(p);
    return 0;
}