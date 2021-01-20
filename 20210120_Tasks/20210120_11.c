#include <stdio.h>

int main(void) {
    char chCode;

    printf("Please enter small letter.\n");
    scanf("%c", &chCode);
    printf("You enter %c.\n", chCode);
    printf("Code %c -> ", chCode );
    switch(chCode){
         case 'x' :
            printf("No\n"); 
            break;
         case 'y' :
         case 'z' :
            printf("Maybe\n"); 
            break;
         case 'a' :
            printf("Yes\n");
            break;
         default :
            printf("Unknown\n");
            break;
    }   
    return 0;
}