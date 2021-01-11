#include <stdio.h>

int findPowerOftwo(unsigned int number)
{
    if (number & (1 << 15)) printf("%d ", (1 << 15));
    if (number & (1 << 14)) printf("%d ", (1 << 14));
    if (number & (1 << 13)) printf("%d ", (1 << 13));
    if (number & (1 << 12)) printf("%d ", (1 << 12));
    if (number & (1 << 11)) printf("%d ", (1 << 11));
    if (number & (1 << 10)) printf("%d ", (1 << 10));
    if (number & (1 <<  9)) printf("%d ", (1 <<  9));
    if (number & (1 <<  8)) printf("%d ", (1 <<  8));
    if (number & (1 <<  7)) printf("%d ", (1 <<  7));
    if (number & (1 <<  6)) printf("%d ", (1 <<  6));
    if (number & (1 <<  5)) printf("%d ", (1 <<  5));
    if (number & (1 <<  4)) printf("%d ", (1 <<  4));
    if (number & (1 <<  3)) printf("%d ", (1 <<  3));
    if (number & (1 <<  2)) printf("%d ", (1 <<  2));
    if (number & (1 <<  1)) printf("%d ", (1 <<  1));
    if (number & (1 <<  0)) printf("%d ", (1 <<  0));
    printf("\n");
}

int main(void)
{ 
    findPowerOftwo(0xFFFF);
    findPowerOftwo(0x5678);
    findPowerOftwo(0x1234);
    findPowerOftwo(0x0000);
    return 0;
}
