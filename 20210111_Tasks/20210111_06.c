#include <stdio.h>

unsigned int setBit(unsigned int number, unsigned int bitValue, int index)
{
    number &= ~(1u << index);
    bitValue <<= index;
    return (number | bitValue);
}

int main(void)
{ 
    printf("%X\n", setBit(0xFF, 0, 2));
    printf("%X\n", setBit(0xFE, 1, 0));
    return 0;
}
