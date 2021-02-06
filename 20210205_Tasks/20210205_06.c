/*Задача 6. Напишете отново функцията void our_strcat(char *s, char *t), която
разгледахме преди малко като използвате указатели, а не
инкрементиращите променливи i, j. */
#include <stdio.h>

void our_strcat (char *s, char *t){
    char *p = s;
    for(; *p != '\0';) {
        p++;
    }
    for(;*t != '\0';) {
        *p++ = *t++;
    }
    *p = '\0';
    printf("%s\n", s);
}

int main() {
    char s[] = "first";
    char t[] = "second";

    our_strcat(s, t);
    return 0;
}