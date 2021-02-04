/*Задача 10. Напишете функция void itob(int n, char s[], int b), която
преобразува цяло число n в низ s базиран на основа b.
Например itob( n, s[], 16) представя числото n като шеснадесетично число в
стринга s[].*/
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

void itob(int n, char s[], int b) {
    char *p = s;

    switch (b) {
        case 2:
        case 8:
        case 10:
            do
            {
                *p++ = n % b + '0';
                n = n / b;
            } while (n != 0);
        break;
        case 16:
            do
            {
                char c = n % b;

                if (c > 9) {
                    *p++ = c + 'A' - 10;
                } else {
                    *p++ = c + '0';
                }
                n = n / b;
            } while (n != 0);
        break;
        default:
            *p++ = '0';
    }
    *p = '\0';
    reverse(s);
}

int main(void) {
    int number = 12345678;
    char str2[20] = {0};
    char str8[20] = {0};
    char str10[20] = {0};
    char str16[20] = {0};

    itob(number,  str2, 2);
    itob(number,  str8, 8);
    itob(number,  str10, 10);
    itob(number,  str16, 16);
    printf("%d ->bin-> %s\n", number, str2);
    printf("%d ->oct-> %s\n", number, str8);
    printf("%d ->dec-> %s\n", number, str10);
    printf("%d ->hex-> %s\n", number, str16);
    return 0;
}