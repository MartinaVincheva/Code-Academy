#include <stdio.h>

int addDigit(int a, int b);

int main(void) { 
	int a, b;

    a = 6;
    b = 8;
    addDigit(a,b);

    return 0;
}

int addDigit(int a, int b) {

    int res;

    res = a + b;
    printf("%d\n", res);
    
    return 0;
}