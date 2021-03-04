#include <stdio.h>

extern int myVar;

void test(void)
{
    myVar++;
}

int main(void)
{
    test();
    test();
    test();

    printf("%d\n", myVar);

    return 0;
}

int myVar = 0;
