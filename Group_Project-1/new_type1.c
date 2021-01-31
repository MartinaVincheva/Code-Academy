#include <stdio.h>

char myString[255];

void getinput(void){
    char *str = myString;
    char c ;
        
    while ((c = getchar()) != '\n') {
        *str++ = c;
    } 
    *str ='\0';
}

int main(void) {
    printf("Enter string: ");
    getinput();
    printf("Your input: %s", myString);
    return 0;
}