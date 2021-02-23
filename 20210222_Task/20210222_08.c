/*Задача 8. Напишете обединение от число и низ, както и описател с изброим
тип за съдържанието на обединението. Напишете функция, която
получава указател към обединението и изброимия тип и извежда
съответно низ или число.*/
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

void printValue(union UnionType *a, enum EnumType type)
{
    switch (type)
    {
    case (VALUE_INT):
        printf("If is INT =  %d\n", a->Inum);
        break;
    case (VALUE_STR):
        printf("If is STR = %s\n", a->string);
        break;
    }
}
int main()
{
    union UnionType a;
    a.Inum = 6000;
    printValue(&a, VALUE_INT);
    strcpy(a.string, "String text");
    printValue(&a, VALUE_STR);
    return 0;
}