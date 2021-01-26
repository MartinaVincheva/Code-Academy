/* Задача 6.Използвайте функцията getchar(), с която въвеждате
текст от клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът
има букви и цифри. Пребройте колко са въведените букви и
колко са въведените цифри. Определeте броя на цифрите в
стринга, като използвате оператор continue.*/
#include <stdio.h>
int main(void) {
    char c;
    int counterLetter = 0;
    int counterNumber = 0;

    while ((c = getchar()) != EOF) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            ++counterLetter; 
        }else if ((c >= '0' && c <= '9') ){
            ++counterNumber; 
        }
    }
    printf("Number of letters : %d", counterLetter);
    printf("Number of numbers : %d", counterNumber);    
    
    return(0);
}