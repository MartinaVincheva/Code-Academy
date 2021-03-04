/*1)Направете побитовите операции върху целите числа 3 и 5 в main().
Покажете резултата с функцията printf(“%d”, rez);
AND operation OR operation XOR operation
00000011 00000011 00000011
& 00000101 | 00000101 ^ 00000101
________ ________ ________
00000001 = 1 00000111 = 7 00000110 = 6 */
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
