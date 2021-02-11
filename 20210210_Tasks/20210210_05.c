/*Задача 5 a. Пренапишете функцията за сумиране елементите на масив
използвайки пойнтер аритметика вместо инкрементиращa променливa i:

int sum_array(const int a[], int n){
    int i, sum = 0;
    for(i = 0; i < n; i++){
        sum += a[ i ];
    return sum;
}*/

#include <stdio.h>

int sum_array(int a[], int n)
{
    int sum = 0;
    int *ip = a;

    while (ip - a < n)
    {
        sum += *ip++;
    }
    return sum;
}

/*Задача 5 b. Пренапишете алгоритъма за сортиране без да използвате инкрементиращи променливи.
void sort ( int a[], int n){
    int i, j, temp;
    for ( i = 0; i < n - 1; ++i )
        for ( j = i + 1; j < n; ++j )
            if ( a[i] > a[j] ) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
    }
} */

#include <stdio.h>

void sort(int a[], int n)
{
    int temp;
    int *p1 = a;

    while (p1 < (a + n - 1))
    {
        int *p2 = p1 + 1;

        while (p2 < (a + n))
        {
            if (*p1 > *p2)
            {
                temp = *p1;
                *p1 = *p2;
                *p2 = temp;
            }
            p2++;
        }
        p1++;
    }
}

int main(void)
{
    int arr[] = {50, 31, 1, 70, 3, 53, 2, 104};
    int n = 8;

    printf("The sum is : %d\n", sum_array(arr, n));
    sort(arr, n);
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}