/*Задача 18.Връщаме се на кода написан в задача 15. Нека сега отпечатаме стринговете с
декрементиране, започвайки отзад напред *to--= *from--;
Проверете готовата функция strlen.
Помислете как да направите проверка във функцията за копиране , дали
размерът на стринга , в който копираме , не е по малък от размера на
стринга , от който копираме , и какво да се случва тогава*/
#include <stdio.h>
#include <string.h>
#include <math.h>

void mystrncpy(char *to, char *from, int size)
{
    int fromLen = strlen(from), copyLen = fmin(size - 1, fromLen);

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
    char str2[8], str4[13];

    mystrncpy(str2, str1, sizeof(str2));
    printf("Copied str1 in empty str2 with lower size is % s\n", str2);
    mystrncpy(str4, str3, sizeof(str4));
    printf("Copied str3 in empty str4 is %s\n", str4);
    return 0;
}