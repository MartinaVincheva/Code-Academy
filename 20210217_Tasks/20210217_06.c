/*Задача6. Пребройте буквите ‚а‘ в стринг (може да е число и масив).
Пример: "This is a string to test my idea for search in a char and ...."; */
#include <stdio.h>
#include <string.h>

int findCountLetter(char *s, char size)
{
    int i, counter;
    for (i = 0; i < size; i++)
    {
        if (s[i] == 'a')
            counter++;
    }
    return counter;
}

int main()
{
    char str1[] = "Another morning another place.The only day off is far away.But every city has seen me in the end.And brings me to you again";
    char size = strlen(str1);
    int (*findA)(char *s, char) = &findCountLetter;
    int counter = (*findA)(str1, size);
    printf("Counted letters 'a' in the string are :%d\n", counter);
    return 0;
}