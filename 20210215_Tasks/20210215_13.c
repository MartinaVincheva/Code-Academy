/*Задача 13.Напишете програма, която намира дължината на стринг с пойнтер! (без да използва length());*/
#include <stdio.h>

char lenOfStr(char *s)
{
    char *p = s;
    while (*p != '\0')
        p++;
    return p - s;
}
int main(void)
{
    char s[] = "Holly Molly Dolly";
    printf("String length %ld \n", lenOfStr(s));

    return 0;
}