#include <stdio.h>

int findLargestBit(unsigned int number)
{
    unsigned int mask = 0x8000;
    int index = 15;

    if (number & mask) return index; mask >>= 1; index--;
    if (number & mask) return index; mask >>= 1; index--;
    if (number & mask) return index; mask >>= 1; index--;
    if (number & mask) return index; mask >>= 1; index--;
    if (number & mask) return index; mask >>= 1; index--;
    if (number & mask) return index; mask >>= 1; index--;
    if (number & mask) return index; mask >>= 1; index--;
    if (number & mask) return index; mask >>= 1; index--;
    if (number & mask) return index; mask >>= 1; index--;
    if (number & mask) return index; mask >>= 1; index--;
    if (number & mask) return index; mask >>= 1; index--;
    if (number & mask) return index; mask >>= 1; index--;
    if (number & mask) return index; mask >>= 1; index--;
    if (number & mask) return index; mask >>= 1; index--;
    if (number & mask) return index; mask >>= 1; index--;
    if (number & mask) return index;
    return -1;
}

int main(void)
{ 
    printf("%d\n", findLargestBit(0x1000));
    printf("%d\n", findLargestBit(0x0000));
    return 0;
}
