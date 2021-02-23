/*Задача 11. Направете обединение с елементи тип int, int, char. Дайте
стойност на елементите един по един 7,10 и “c” и изведете
тези стойности на конзолата.
Инициализирайте и трите и изведете стойностите им на конзолата.*/
#include <stdio.h>

union UnionType
{
    char letter;
    int Inum;
    int Inum1;
} ch_letter;

int main()
{
    union UnionType myVal;
    union UnionType *pVal = &myVal;
    pVal->Inum = 7;
    union UnionType myVal1 = {.Inum1 = 10};
    ch_letter.letter = 'c';
    printf("Inum: %d, Inum1: %d, Letter: %c\n", pVal->Inum, myVal1.Inum1, ch_letter.letter);
    return 0;
}