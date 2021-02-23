/*Задача 9. Напишете функция, която преобразува число в низ и обратното,
като използва описанието от предишната задача.*/
#include <stdio.h>
#include <string.h>

enum EnumType
{
    VALUE_INT,
    VALUE_STR
};
union UnionType
{
    int Inum;
    char string[64];
};

void reverse(char *s)
{
    int i, j;
    char c;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        c = s[j];
        s[j] = s[i];
        s[i] = c;
    }
}
int atoi(char *s)
{
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; i++)
        n = 10 * n + (s[i] - '0');
    return n;
}

void itoa(int n, char *s)
{
    char *p = s;

    do
    {
        *p++ = n % 10 + '0';
        n = n / 10;
    } while (n != 0);
    *p = '\0';
    reverse(s);
}

void printValue(union UnionType *a, enum EnumType type)
{
    switch (type)
    {
    case (VALUE_INT):
        printf("As INT =  %d\n", a->Inum);
        itoa(a->Inum, a->string);
        printf("As INT =  %s\n", a->string);
        break;
    case (VALUE_STR):
        printf("As STR = %s\n", a->string);
        atoi(a->string);
        printf("As INT =  %s\n", a->string);
        break;
    }
}
int main()
{
    union UnionType a;
    a.Inum = 6000;
    printValue(&a, VALUE_INT);

    strcpy(a.string, "123");
    printValue(&a, VALUE_STR);

    return 0;
}