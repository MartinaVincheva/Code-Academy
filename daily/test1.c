#include <stdio.h>

int main(void){
    char s[] = "123";
    printf("%d", atoi (s));
    }
int atoi (char *s) ,
n = 0;
for(
i = 0; i ] >= '0' && i ] <= '9'; i
n = 10 * n + (s[
i ] --'
return n;