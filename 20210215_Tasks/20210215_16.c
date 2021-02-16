/*Задача 16.Направете същото , както в задача 15, но използвайки готовата функция strcpy .
Потърсете онлайн как работи тази функция и какви аргументи приема*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Nice to see you!";
    char str3[] = "How are you?";
    char str2[17], str4[13];

    strcpy(str2, str1);
    printf("Copied str1 in empty str2 is % s\n", str2);
    strcpy(str4, str3);
    printf("Copied str3 in empty str4 is %s\n", str4);
    return 0;
}