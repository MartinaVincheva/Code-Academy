#include <stdio.h>

int main(void) { 
	int a, b;

    a = 3;
    b = 5;
    printf("%d\n", a&b);
    printf("%d\n", a|b);
    printf("%d\n", a^b);
    
    return 0;
}
