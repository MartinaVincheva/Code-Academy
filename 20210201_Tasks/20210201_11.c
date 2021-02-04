/*Задача 11 напишете функция void squeeze(char s[], int c), която
премахва символа с от низа s[]*/
#include <stdio.h>
#include <string.h>

void squeeze(char s[], int c){
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
              s[j++] = s[i];
    s[j] = '\0';
}
int main(void) {
    char str[10] = "abcdabcd";
    int c = 'c';
    printf("Initial String -> %s\n", str);
    squeeze(str, c);
    printf("String without 'c'-> %s\n", str);
    return 0;
}