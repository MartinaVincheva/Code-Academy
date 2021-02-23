/*Задача 13. Направете обединение с членове unsigned short и char. Ограничете
използваните битове до 6. Инициализирайте и изведете на
конзолата.
union <tagUnion> {
Ctype m_bitField : N;
};
*/
#include <stdio.h>

union My_union
{
    char c;
    unsigned short n : 6;
} a;

int main()
{
    a.c = 'A';
    printf("Size of Union = %d Bytes, Char c = %c.\n", sizeof(a), a.c);
    a.n = 25;
    printf("Size of Union = %d Bytes, Unsigned short n = %d.\n", sizeof(a), a.n);
    return 0;
}