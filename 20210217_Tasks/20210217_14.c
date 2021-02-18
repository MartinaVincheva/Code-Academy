/*Задача14. Напишете програма , която да проверява дали 2 стринга масива ) са
анаграми и имат всичките букви на другата дума . Използвайте функции
Примери за анаграми : реклама : карамел ; босилек : обелиск*/
#include <stdio.h>
#include <string.h>

int compare(char *s, char *t)
{
    char *temp = s;

    while (*s)
    {
        char *p = t;
        while (*p && *s != *p)
        {
            p++;
        }
        if (*p == '\0')
            return 0;
        s++;
    }
    while (*t)
    {
        char *p = temp;
        while (*p && *t != *p)
        {
            p++;
        }
        if (*p == '\0')
            return 0;
        t++;
    }

    return 1;
}

int main(void)
{
    char s[] = "dabc";
    char t[] = "abcd";
    int (*comp)(char *, char *) = &compare;
    int res = comp(s, t);

    if (res == 1)
        printf("Those two strings are anagrams, result %d \n", res);

    else
        printf("Those two strings are not anagrams, result %d \n", res);

    return 0;
}