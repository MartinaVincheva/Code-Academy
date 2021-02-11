/*Задача 7. Разгледайте и имплементирайте quicksort алгоритъма.*/
#include <stdio.h>

void quicksort(int a[], int l, int r);
void swap(int *a, int *b);
int partition(int a[], int l, int r);

int main()
{
    int ArrInt[] = {100, 2, 30, 4, 50, 6};
    int size = sizeof(ArrInt) / sizeof(ArrInt[0]);
    int i;

    quicksort(ArrInt, 0, size - 1);
    for (i = 0; i < size; i++)
        printf("%d ", ArrInt[i]);

    printf("\n");
    return 0;
}

void quicksort(int a[], int l, int r)
{
    if (l <= r)
    {
        int i = partition(a, l, r);

        quicksort(a, l, i - 1);
        quicksort(a, i + 1, r);
    }
}
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int l, int r)
{
    int pivot = a[r];
    int i = (l - 1);

    for (int j = l; j <= r - 1; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[r]);
    return (i + 1);
}