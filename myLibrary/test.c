#include "Marty_Library.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Hello";
    char str1[] = "ECHO";

    printf("%d\n", fnPlus(5, 2));
    printf("%d\n", fnMinus(8, 2));
    printf("%d\n", NOK(7, 70));
    reverse(str);

    return 0;
}