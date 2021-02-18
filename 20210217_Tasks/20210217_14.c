/*Задача14. Напишете програма , която да проверява дали 2 стринга масива ) са
анаграми и имат всичките букви на другата дума . Използвайте функции
Примери за анаграми : реклама : карамел ; босилек : обелиск*/
#include <stdio.h>
#include <string.h>

int our_strcmp(char *s, char *t)
{
    int res = strcmp(s, t);
    return res;
}
int main(void)
{
    char s[] = "abc";
    char t[] = "cba";
    int res = our_strcmp(s, t);

    if (res == 0)
        printf("Those two strings are anagrams, result %d \n", res);

    else
        printf("Those two strings are not anagrams one of them is longer, result %d \n", res);

    return 0;
}