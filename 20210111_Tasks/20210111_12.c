#include <stdio.h>

unsigned int riseBwhenIts3(unsigned int number)
{   
    unsigned int mask = 0;

    mask |= (1u << 1*3);
    mask |= (1u << 2*3);
    mask |= (1u << 3*3);
    mask |= (1u << 4*3);
    mask |= (1u << 5*3);
    return (number | mask);
}

int main(void)
{ 
    printf("%X\n", riseBwhenIts3(0x0000));
    return 0;
}
