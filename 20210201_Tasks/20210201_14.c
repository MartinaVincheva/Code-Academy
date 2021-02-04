/*Задача 14*. Напишете функция int getline(char s[],int lim), която чете ред в
s[] и връща дължината му*/
#include <stdio.h>

int getline(char s[], int lim) {
    int c;
    char * p = s;
   
    while (((c = getchar()) != '\n') && ((p - s) < lim)) {
        *p++ = c;
    }
    *p = '\0';
    return p - s;
    
}
int main(void) {
    char s[200]; 

    printf("\nPlease enter your text: ");
    printf("The length of the line %s is : %d ", s, getline(s, sizeof(s)));
    return 0;
}
