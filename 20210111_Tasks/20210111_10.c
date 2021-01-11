#include <stdio.h>

unsigned int clearRemainingBits(unsigned int number, int fromBit)
{
    unsigned int mask;

    mask = (~0) << fromBit;
    mask = ~mask;
    return (number & mask);
}

int main(void)
{ 
    printf("0x%X\n", clearRemainingBits(0xFFFF,5));
    return 0;
}
