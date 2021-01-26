/* 2.Пребройте редовете, подадени чрез текст на конзолата.
Използвайте функцията getchar();*/
#include <stdio.h>

int main(void){
    char c;
    int counter =0;

    while((c = getchar()) != EOF){
        if (c == '\n')
        ++counter;
    }
    printf("Number of lines are :%d\n", counter);

    return 0;
}
