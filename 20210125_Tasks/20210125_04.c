/* 4. Напишете програма, която копира входа си на изхода, като
замества всеки низ от една или повече шпации, с една
единствена шпация.*/
#include <stdio.h>

int main(void){
    char c = 0;
    int i = 1;
    
    while((c = getchar()) !=EOF){
        if(c== ' '){
        if (i == 1 && c == ' '){
            continue;
        }
           i = 1;
        } else {
           i = 0;
        }
       putchar(c);
      
    }
    return 0;
}
