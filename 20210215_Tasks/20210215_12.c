/*Задача 12.Напишете програма, която дефинира масив [10][10][10], пълни го със случайни числа и смята средното аритметично, само с един цикъл.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float avgOfRandNumbers(int *s, int size)
{
    int sum = 0, temp;
    int *p = s;
    float avg;

    for (int i = 0; i < size; i++)
    {
        temp = rand() % size;
        *p++ = temp;
        sum += temp;
    }
    printf("Sum of random numbers = %d\n", sum);
    avg = (float)sum / size;

    return (float)avg;
}

int main()
{
    int arrInt[10][10][10];
    int *p = (int *)arrInt;
    int size = sizeof(arrInt) / sizeof(int);
    //printf("%d", size);
    srand(time(NULL));
    float avg = avgOfRandNumbers(p, size);
    printf("Average = %.3f\n", avg);

    return 0;
}