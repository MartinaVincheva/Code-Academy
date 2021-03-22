#include <stdio.h>

union
{
    struct
    {
        unsigned char b1 : 1;
        unsigned char b2 : 1;
        unsigned char b3 : 1;
        unsigned char b4 : 1;
        unsigned char reserved : 4;
    } bits;
    unsigned char byte;
} HW_RegisterB;

union HW_RegisterB reg;

x = reg.bits.b2;

void LEtoBE(unsigned int *t)
{
    *t = (*t >> 24) | (*t << 24) | ((*t << 8) & 0x00ff0000u) | ((*t >> 8) & 0x0000ff00u);
    return;
}

int main(void)
{
    unsigned int cell = 0x12345678u;
    printf("%x\n", cell);
    LEtoBE(&cell);
    printf("%x\n", cell);

    return 0;
}
