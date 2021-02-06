/*Задача 1.Напишете функцията void printStr(char *s) аргумент поинтер
към началото на стринга. Използвайте for цикъл и обходете стринга докато
не стигнете знака за на стринг ' 0'. На ваяка итерация пристирайте всеки
един елемент на стринга с printf(“%с”, с). */
#include <stdio.h>
#include <string.h>

void printStr(char *s){
    char i;
        for(i = 0; s[i]; i++)
        printf("%c", s[i]);  
}
int main(void) {
    char arrS[] = "test";
    printStr(arrS);
    printf("\n");
    return 0;
}