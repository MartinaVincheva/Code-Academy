#include <stdio.h>

unsigned int obarniBitNa(unsigned int number, int index)
{
    unsigned int mask = (1u << index);

    return (number ^ mask);
}

int main(void)
{ 
    printf("%X\n", obarniBitNa(0x00, 3));
    printf("%X\n", obarniBitNa(0x01, 0));
    return 0;
}
