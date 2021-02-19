/*Задача13.Напишете програма, която да прочете низ от потребителя и да го обърне в обратен ред.
Например: 'xyz' да стане 'zyx'*/
#include <stdio.h>
#define ARR_SIZE 100

void reverse(char *arr1, int size)
{
    char c, *p;
    int i = 0;
    p = arr1;

    while ((c = getchar()) != '\n')
    {
        arr1[i] = c;
        i++;
        p++;
    }
    while (i > 0)
    {
        --p;
        putchar(*p);
        i--;
    }
}

int main()
{
    char arr1[ARR_SIZE];
    void (*rev)(char *, int) = &reverse;
    printf("Please enter your text : ");
    rev(arr1, ARR_SIZE);
    printf(" is your reversed text . ");
    printf("\n");
    return 0;
}