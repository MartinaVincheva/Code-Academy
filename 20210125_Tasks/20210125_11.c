/* Задача 11.
Напишете функция void reverse(char s[]), която обръща
низа char s[]. Използвайте for цикъл с два аргумента , разделени със запетая
i= 0, j = strlen (s) 1; i < j; i ++, j ----, за да обърнете стринга.*/
#include <stdio.h>
#include <string.h>
void reverse(char str[]) ;

int main(void){
    reverse("Kizomba") ;
    return 0;
}

void reverse(char str[]){
    char rev [strlen(str)];
    int i, j ;
   
    for (i = 0 , j = strlen(str)-1 ; i<strlen(str); i++, j--){
        rev[i] = str[j];
        printf("%c", rev[i]);
    }
    printf("\n");
}
