#include <stdio.h>

int clearBitsBetween3and7(unsigned int number)
{
    unsigned int mask = ~(7 << 4);
    return (number & mask);
}

int clearBitsFrom3to7(unsigned int number)
{
    unsigned int mask = ~(0x1F << 3);
    return (number & mask);
}

int main(void)
{ 
    printf("0x%X\n", clearBitsBetween3and7(0xFFFF));
    printf("0x%X\n", clearBitsFrom3to7(0xFFFF));
    return 0;
}
