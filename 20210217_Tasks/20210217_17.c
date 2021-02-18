/*Задача17. Имаме 2 сортирани масиви А и В с различна размерност k и l и
произволни int числа.
Образувайте масив С, образуван от смесването на А и В, така че С да
съдържа елементите на А и В, но да е подреден и да не се налага да го
сортираме отново.*/
#include <stdio.h>

void merge(int[], int, int[], int, int[]);

int main()
{
    int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[11] = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
    int m, n, i, c[20];
    merge(a, m, b, n, c);

    printf("c array:\n");

    for (i = 0; i < m + n; i++)
    {
        printf("%d\n", c[i]);
    }
    return 0;
}

void merge(int a[], int m, int b[], int n, int c[])
{
    int i, j, k;

    j = k = 0;

    for (i = 0; i < m + n;)
    {
        if (j < m && k < n)
        {
            if (a[j] < b[k])
            {
                c[i] = a[j];
                j++;
            }
            else
            {
                c[i] = b[k];
                k++;
            }
            i++;
        }
        else if (j == m)
        {
            for (; i < m + n;)
            {
                c[i] = b[k];
                k++;
                i++;
            }
        }
        else
        {
            for (; i < m + n;)
            {
                c[i] = a[j];
                j++;
                i++;
            }
        }
    }
}