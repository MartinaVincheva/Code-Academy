/* Задача 11.
Напишете функция void reverse(char s[]), която обръща
низа char s[]. Използвайте for цикъл с два аргумента , разделени със запетая
i= 0, j = strlen (s) - 1; i < j; i ++, j ----, за да обърнете стринга.*/
#include <stdio.h>
#include <string.h>
void reverse(char str[]) ;

int main(void) {
    char c, str[256];
    int idx = 0;

    while((c = getchar()) != EOF) {
        if (c == '\n') {
            break;
        }
        str[idx++] = c;
    }
    str[idx] = '\0';
    printf("Non reversed string is '%s'\n", str);
    reverse(str);
    printf("Reversed string is '%s'\n", str);
    return 0;
}

void reverse(char str[]){
    int i, j;
    char c;
   
    for (i = 0 , j = strlen(str) - 1 ; i < j; i++, j--) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
}
