/* Задача 9.
Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът се принтира с
putchar(), като преобразува главните букви в малки.*/
#include <stdio.h>

int main(void){
    char c = 0;
  
    while((c = getchar()) !=EOF){
            if (c >= 'A' && c <= 'Z'){
                c = c + 32;
                putchar(c);
            }
    }
    return 0;
}        
        