#include <stdio.h>

unsigned int vdigniBitNa(unsigned int number, int index)
{
    unsigned int mask = (1u << index);

    return (number | mask);
}

int main(void)
{ 
    printf("%X", vdigniBitNa(0x00, 3));
    return 0;
}
