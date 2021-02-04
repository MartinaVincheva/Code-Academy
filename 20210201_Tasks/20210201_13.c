/*Задача 13 напишете функцията void lower(char s[]), която
преобразува главните букви в малки.*/
#include <stdio.h>
#include <string.h>

void lower(char s[]){
    int i,c,res ;
   
    while (((c = getchar()) != '\n')) {
        i++;
        if (c >= 'A' && c <= 'Z')
            c = c + 32;
            res = putchar(c);
    }
    return ;
}
int main(void) {
    char str[100] ;

    printf("Please, Enter some text with upper and lower case:");
    lower(str);
    return 0;
}