/*Задача 21. Напишете функция , която сортира лексикографски масив от
символи (char[]) използвайки qsort*/
#include <stdio.h>
#include <string.h>

void qsort(char s[], int l, int r);
void swap(char *a, char *b);
int partiton(char s[], int l, int r);

int main()
{
    char str1[] = "fdson";
    int size = sizeof(str1) / sizeof(str1[0]);
    int i;

    qsort(str1, 0, size - 1);
    for (i = 0; i < size; i++)
        printf("%d ", str1[i]);

    printf("\n");
    return 0;
}

void qsort(char s[], int left, int right)
{
    if (left <= right)
    {
        int i = partiton(s, left, right);
        qsort(s, left, i - 1);
        qsort(s, i + 1, right);
    }
}

void swap(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partiton(char s[], int left, int right)
{
    char pivot = s[right];
    int i = left - 1;

    for (int j = left; j <= right - 1; j++)
    {
        if (s[j] < pivot)
        {
            i++;
            swap(&s[i], &s[j]);
        }
    }
    i++;
    swap(&s[i], &s[right]);
    return i;
}
