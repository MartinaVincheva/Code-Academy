/*Задача 10. Използвайки горните две задачи като база, обединете
обединението и описателя в една структура. Напишете функция,
която извежда съдържанието на новата структура.*/
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
struct MyStruct
{
    enum EnumType m_type;
    union UnionType m_var;
};

void printValue(struct MyStruct *p)
{
    if (VALUE_INT == p->m_type)
    {
        printf("INT: %d\n", p->m_var.Inum);
    }
    else if (VALUE_STR == p->m_type)
    {
        printf("STR: %s\n", p->m_var.string);
    }
}
int main()
{
    struct MyStruct a = {VALUE_INT, 6500};
    printValue(&a);
    a.m_type = VALUE_STR;
    strcpy(a.m_var.string, "String text");
    printValue(&a);
    return 0;
}