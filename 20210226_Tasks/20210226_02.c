/*Задача 2 Създайте нов потребителски тип
към тип long long int. Използвайте го във функцията
printf, отпечатайте размера.*/
#include <stdio.h>

int main()
{
    typedef long long int t_LLint;
    t_LLint i = 23540012;

    printf("Number : %ld\n", i);

    return 0;
}
