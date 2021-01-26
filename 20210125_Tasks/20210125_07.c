/* Задача 7.
Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът да отпечатва
само входни редове, които са по дълги от 80 символа.*/
#include <stdio.h>
int main(void) {
    int c;
    char str[256];
    int i = 0;
  /*  while ( (c = getchar()) != EOF){ 
             str[i] = c;
             i++;
            if ( c =='\n' && i >80 ){
                printf("%s", str);
                i=0 ;
            } else if( c =='n'){ 
                i=0;
            }
    } 
    return(0);*/
}
}