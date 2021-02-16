/*Задача 20.Дефинирайте стринг „I am a poor programmer"
Заменете през пойнтер “poor” с “great"*/
#include <stdio.h>
int main()
{
    char str1[] = "I am a poor  programmer!";
    char str2[] = "great";
    char *p1 = str1;
    char *p2 = str2;

    while (*p1++ != '0')
    {
        if (*p1 == 'p')
        {
            while (*p2)
            {
                *p1 = *p2;
                p1++, p2++;
            }
            break;
        }
    }
    printf("New sring is : %s\n", str1);
    return 0;
}