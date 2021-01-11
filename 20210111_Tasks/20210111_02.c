#include <stdio.h>

unsigned int vzemiBitna(unsigned int number, int index) {
    unsigned int res;

    res = number;
    res = res >> index;
    res = res & 1;  
    return res;
}

int main(void) { 

    printf ("%d\n", vzemiBitna(0xFF,5));
    printf ("%d\n", vzemiBitna(0x07,3));

    return 0;
}

