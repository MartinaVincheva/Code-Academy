/*Задача 1 декларирайте три масива с три елемента:
Първият от тип char
Вторият от тип int
Третият от тип double
Отпечатайте размерите на масивите използвайки
оператора sizeof(arr);
Задача 1.2 принтирайте последния елемент от
декларираните по горе масиви:
Първият от тип char
Вторият от тип int
Третият от тип double */
#include <stdio.h>

int main(void) {
    char arrChar[3];
    int arrInt[3];
    double arrDouble[3];
    printf("Size of arrChar is : %d Bytes \n", sizeof(arrChar));
    printf("Size of arrInt is : %d Bytes \n", sizeof(arrInt));
    printf("Size of arrDouble is : %d Bytes \n", sizeof(arrDouble));
    printf("3rd symbol of arrChar is : %c  \n", arrChar[2]);
    printf("3rd symbol of arrInt is : %d  \n", arrInt[2]);
    printf("3rd symbol of arrDouble is : %f  \n", arrDouble[2]);

    return 0;
}