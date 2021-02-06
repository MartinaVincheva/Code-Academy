/*Задача 4. Напишете финкцията int our_strcmp(char *s, char *t), която
сравнява низовете s и t и връща нула 0 ако двата низа са равни. Ако
елемента в който се различават s[i] е по малък от t[i] връща стойност по
малка от нула < 0. Ako s[i] е по голям от t[i] връща стойност по голяма от
нула > 0 */
#include <stdio.h>

int our_strcmp(char *s, char *t){

    while (*s != '\0' && *t != '\0'){
        s++ ;t++;
    }
        if (*s == *t)
            return 0;
        else 
            return *s - *t;
}
int main(void) {
    char s[] = "abcdefgaaZZZ ab";
    char t[] = "ZZZZZZZZZZZZ abd";
    int res = our_strcmp (s, t);

    if (res < 0)
        printf("*s is < 0 result %d \n", res);
    else if (res > 0)
        printf("*s is > 0 result %d \n", res);
    else 
        printf("*s is equal to *t result %d \n", res);
    return 0;
}