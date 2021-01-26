#include <stdio.h>

int main(void){
    char c; /*не работи на Windows когато е int c */
    c = getchar();
    while(c != EOF){
        putchar(c);
        c = getchar();
    }
    return 0;
}
