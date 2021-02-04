/*Задача 8 Напишете функция void reverse(char s[]), която обръща низа char s[].
 Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s)-1; i < j; i++, j ----, за да обърнете*/
#include <stdio.h>
#include <string.h>

void reverse(char s[]) {
    int i, j;
    char c;
    
    for(i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[j];
        s[j] = s[i];
        s[i] = c;
    }
}

int main() {
    char str[10] = {'a', 'b', 'c', 'd', 'a', 'b', 'c', 'd', '\0'};
    
    reverse(str);
    printf("Reversed string: %s", str);
    return 0;
}