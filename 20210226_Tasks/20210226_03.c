/*Задача 3. Дефинирайте потребителски тип към
указател.Създайте променлива, насочете указателя
към нея, използвайки новия потребителски тип.*/
#include <stdio.h>

int main()
{
    typedef char t_char;
    t_char a;
    typedef t_char *p;
    p letter = &a;
    *letter = 'a';

    printf("Char : %c/%c\n", *letter, a);

    return 0;
}
