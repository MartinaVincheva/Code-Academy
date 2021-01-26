/* Задача 7.
Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът да отпечатва
само входни редове, които са по дълги от 80 символа.*/
#include <stdio.h>

int getStringLenght(char str[]);

int main(void) {
    char c;
    char str[256];
    int i = 0;

        while((c = getchar()) != EOF){
            str[i++] = c; 
        }
        str[i] ='\0';
        if ( i > 80 ){
            printf("%s", str);
        }
    return(0);
}