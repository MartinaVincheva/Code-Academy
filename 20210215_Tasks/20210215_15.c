/*Задача 15.Ще копираме стрингове . Дефинирайте и инизиалицирайте два стринга
string 1: "A string to be copied."
string3: "I am very good in strings coping!"
Дефинирайте и два празни стринга , в които ще копираме string 2,string4.
Дефинирайте функция , която през пойнтери ще извърши копирането
от стринг към стринг . Използвайте while и факта , че *pointer++ отива към следващия символ
Помислете за терминиращия символ . Принтирайте двата изкопирани стринга
Извикайте функцията и копирайте от string1 в string4.*/
#include <stdio.h>

void copyString(char *str1, char *str2)
{

    while (*str1 != '\0')
    {
        *str2 = *str1;
        str1++;
        str2++;
    }
    *str2 = '\0';
}

int main()
{
    char str1[] = "Nice to see you!";
    char str3[] = "How are you?";
    char str2[17], str4[13];

    copyString(str1, str2);
    printf("Copied str1 in empty str2 is % s\n", str2);
    copyString(str3, str4);
    printf("Copied str3 in empty str4 is %s\n", str4);
    return 0;
}