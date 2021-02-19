/*Задача5.Намерете стойностите в интервала 1-5, включително, в двумерен масив [5] [5] пълен със случайни числа в интервала 0 10, включително.
Използвайте функция, която да пълни числата със случайни. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *valueOfRandNumbers(int arr[5][5], int size)
{
    int i;
    int *p = (int *)arr;
    for (i = 0; i < size; i++)
    {
        *p++ = (rand() % 10) + 1;
    }
    return arr[i];
}
void findValue(int arrInt[5][5])
{
    int i, j;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arrInt[i][j] >= 1 && arrInt[i][j] <= 5)
            {
                printf("Values from 1 to 5 are on positions [%d][%d] = %d \n", i, j, arrInt[i][j]);
            }
        }
    }
}

int main()
{
    int arrInt[5][5];
    int *p = (int *)arrInt;
    int size = sizeof(arrInt) / sizeof(int);
    void (*Value)(int arrInt[5][5]) = &findValue;
    int *(*randNumb)(int arr[5][5], int) = &valueOfRandNumbers;
    srand(time(NULL));
    p = randNumb(arrInt, size);
    printf("\n");
    Value(arrInt);

    return 0;
}