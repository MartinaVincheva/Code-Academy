/*Задача 18.Връщаме се на кода написан в задача 15. Нека сега отпечатаме стринговете с
декрементиране, започвайки отзад напред *to--= *from--;
Проверете готовата функция strlen.
Помислете как да направите проверка във функцията за копиране , дали
размерът на стринга , в който копираме , не е по малък от размера на
стринга , от който копираме , и какво да се случва тогава*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void copyBackwardString(char *to, char *from)
{
    int toLen = strlen(to), fromLen = strlen(from), copyLen = min(toLen, fromLen);

    to += copyLen;
    *to = '\0';
    to--;
    from += copyLen - 1;
    while (copyLen--)
    {
        *to-- = *from--;
    }
}

int main()
{
    char str1[] = "Nice to see you!";
    char str3[] = "How are you?";
    char str2[17], str4[13];

    copyBackwardString(str1, str2);
    printf("Copied str1 in empty str2 is % s\n", str2);
    copyBackwardString(str3, str4);
    printf("Copied str3 in empty str4 is %s\n", str4);
    return 0;
}