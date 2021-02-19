/* Задача23. Използване на метода на мехурчето за сортиране на масив от
числа (виж. wiki).
Потребителят въвежда броя числа и след това въвежда всяко
едно число. Напишете програма, която трябва да сортира числата
и да ги изведе в сортиран вид, като най малкото се извежда първо.
Вариация: Да се направи същото с масив от символи.. */
#include <stdio.h>

void bubleSort(int *arr, int arrSize)
{
    int lastElement = arrSize;

    while (lastElement)
    {
        for (int i = 0; i < lastElement; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
        lastElement--;
    }
}

void printArray(char *str, int *arr, int arrElements)
{
    printf("\n%s array with %d elements:\n", str, arrElements);
    for (size_t i = 0; i < arrElements; i++)
    {
        printf("arr[%2d] = %2d ", i, arr[i]);
        if ((i + 1) % 8 == 0)
            printf("\n");
    }
    printf("\n");
}

int main(void)
{
    int arr[] = {5, 95, 39, 76, 20, 61, 14, 40, 96, 67, 60, 63, 86, 24, 38, 59, 74, 35, 71, 19, 74, 56};
    int arrElements = sizeof(arr) / sizeof(int);
    void (*p)(char *str, int *arr, int arrElements) = &printArray;
    void (*sort)(int *arr, int arrSize) = &bubleSort;

    p("Unsorted", arr, arrElements);
    sort(arr, arrElements);
    p("Sorted", arr, arrElements);
    return 0;
}