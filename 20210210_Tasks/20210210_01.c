/*Задача1. Напишете програма , която сумира всички елементи на масив
намиращи се на нечетна позиция.
Декларирайте пойнтер към първата нечетна позиция , инкрементирайте
пойнтера по подходящ начин за да извършите сумирането*/
#include <stdio.h>
#include <string.h>

unsigned int sum(unsigned int *arr, int arrSize)
{
    unsigned int res = 0;
    unsigned int *p = &arr[1];

    while (p - arr < arrSize)
    {
        res += *p;
        p += 2;
    }
    return res;
}

int main(void)
{
    int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};

    printf("Sum of the odd elements from the array is : %d\n", sum(arr, sizeof(arr) / sizeof(int)));
    return 0;
}