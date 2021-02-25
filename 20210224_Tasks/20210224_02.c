/*Задача 2. Напишете макрос swap(t, x, y), койти променя местата на двата аргумента
от тип t.*/
#include <stdio.h>
#define SWAP(t, x, y) \
    {                 \
        t z;          \
        z = x;        \
        x = y, y = z; \
    }

int main()
{
    int x = 2, y = 3;
    SWAP(int, x, y);
    printf("%d,%d\n", x, y);
    char a = 'X', b = 'a';
    SWAP(char, b, a);
    printf("%c%c\n", b, a);

    return 0;
}