/* Задача 10.
Упражнение 10.Напишете функция reverse(s), която обръща символния низ
s. Използвайте я, за да напишете програма, която преобръща входа си ред
по ред.*/
#include <stdio.h>

int main(void){
    char c ;
    char str[256],rts[256];
    int i, beg, end = 0;
    
    while ((c = getchar()) != EOF){
        str[i] = c;
        ++i;
    } end = i -1;

    for (beg = 0;beg< i; beg ++){
        rts[beg] = str[end];
        end--;
    } rts[beg] = '\0';

    printf("%s\n", rts);

    return 0;
} 