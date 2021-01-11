#include <stdio.h>

unsigned int iz4istiBitna(unsigned int number, int index)
{
    unsigned int mask = ~(1u << index);

    return (number & mask);
}

int main(void)
{ 
    printf("%X", iz4istiBitna(0xFF, 3));
    return 0;
}
