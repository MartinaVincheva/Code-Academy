/*Задача 8. Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SEPARATOR "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"

int atoi (char *s);
void itoa(int n, char *s);
double atof(char *s);
void reverse(char *s);


int atoi (char *s) {
    int i, n;
    n = 0;
    for(i = 0; s[i] >= '0' && s[i] <= '9'; i++)
        n = 10 * n + (s[i] -'0');
    return n;
}

void itoa(int n, char *s) {
    char *p = s;

    do
    {
        *p++ = n % 10 + '0';
        n = n / 10;
    } while (n != 0);
    *p = '\0';
    reverse(s);
}

double atof(char *s) {
    double a, power;
    int i = 0;

    for( a = 0.0; isdigit(s[i]); i++) 
        a = 10.0 * a +(s[i]-'0');
    if(s[i] == '.')
        i++;
    for(power = 1.0; isdigit(s[i]); i++) { 
        a = 10.0 * a + (s[i] -'0');
        power = power*10; 
    }  
    return a/power; 
}

void reverse(char *s) {
    int i, j;
    char c;
    
    for(i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[j];
        s[j] = s[i];
        s[i] = c;
    }
}

int main() {
    char s1[] = "12345";
    char s2[] = "abcde";
    int number = 10203040;
    char s3[9] = {0};
    
    printf("s1 ='%s'    atoi '%d'\n", s1, atoi(s1));
    printf(SEPARATOR"\n");
    itoa(number,  s3);
    printf("Int='%d' itoa '%s'\n", number, s3);
    printf(SEPARATOR"\n");
    reverse(s2);
    printf("s2 ='abcde' reverse '%s'\n", s2);
    printf(SEPARATOR"\n");
    printf("s1 ='12345'    atof '%f'\n", atof(s1));
    printf(SEPARATOR"\n");
    
    return 0;
}