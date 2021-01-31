#include <stdio.h>

int isLetter (char c) {
    return (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')));
}

int main(){
	 printf("Please enter leter or number:\n ");
     char c = getchar();

    printf("You hit ");
    if (!isLetter(c)) {
        printf("non ");
    }
    printf("letter \"%c\"\n", c);
    
    return 0;	
}