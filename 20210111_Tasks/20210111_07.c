#include <stdio.h>

unsigned int clearEven(unsigned int number)
{
    return (number & 0xAAAA);
}

int main(void)
{ 
    printf("%X\n", clearEven(0x5555));
    printf("%X\n", clearEven(0xFDFD));
    return 0;
}
