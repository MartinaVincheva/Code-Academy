/*Задача 19.Дефинирайте стринг : „Baba, kaka, mama” заменете „a" със "о"*/
#include <stdio.h>

int main()
{
    char str1[] = "Baba, kaka, mama.";
    char *p = str1;

    while (*p++ != '\0')
    {
        if (*p == 'a')
            *p = 'o';
    }
    printf("New sring is : %s\n", str1);
    return 0;
}