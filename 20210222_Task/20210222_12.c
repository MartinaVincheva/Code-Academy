/*Задача 12. Напишете програма, която използва битови полета. Битовите полета да
са членове на структура и да са от следните типове: unsigned int и char.
Задайте им размер short int 3 бита, char 6 бита. 
struct <tagStruct> {
Ctype m_bitField : N;
CType2 m_bitField2 : M;
};
Дефинирайте променлива на структурата и инициализирайте ги със
стойност 7 и съответно ‘c’.
Разпечатайте елементите. Разпечатайте и големината на структурата.
Добавете още членове от съществуващите типове и разпечатайте
големината на структурата отново. Пренаредете ги като
последователност, да са char, char, short int, short int. Как се променя
големината на структурата?
Опитайте същото с препроцесор #pragma pack(1).*/
#include <stdio.h>

struct My_StructType
{
    char letter : 6;
    short int Inum : 3;

} my_structA;
struct My_StructType1
{
    char letter1 : 6;
    char letter2 : 6;
    short int Inum1 : 3;
    short int Inum2 : 3;

} my_structB;
int main()
{
    struct My_StructType *AStruct = &my_structA;
    AStruct->Inum = 7;
    AStruct->letter = 'c';
    printf("Letter: %d, short int: %d, Size of My_Struct: %d\n", my_structA.letter, my_structA.Inum, sizeof(my_structA)); /*only with 3 bits for short int we can print positive numbers from 1 to 3,
    and with 6 bits for char we can't print any letter, that's why we receive negative number for it */
    my_structB.letter1 = 'Z';
    my_structB.letter2 = 'F';
    my_structB.Inum1 = 1;
    my_structB.Inum2 = 3;
    printf("Letters: %c, %c, short int: %d,%d, Size of My_Struct: %d\n", my_structB.letter1, my_structB.letter2, my_structB.Inum1, my_structB.Inum2, sizeof(my_structB));
    return 0;
}