/*Задача 2. Напишете програма, която чете съобщение, след което го
принтира в обратен ред:
Enter a message: I am Miro.
Reversal is : .oriM ma I
Използвайте getchar() за да вземете символите от конзолата, запазете ги в
масив от чарове, прекратете четенето до достигане на n. Използвайте
пойнтер, който да сочи към текущата позиция на масива. Чрез него
принтирайте масива в обратен ред.*/
#include <stdio.h>

#define ARR_SIZE 100

void reverse(char *arr1, int size)
{
    char c, *p;
    int i = 0;
    p = arr1;

    while ((c = getchar()) != '\n'){
        arr1[i] = c;
        i++;
        p++;    
    } while (i > 0){
        --p;
        putchar(*p);
        i--;
    }
}

int main(){
    char arr1[ARR_SIZE];
    printf("Please enter your text : \n");
    reverse(arr1, ARR_SIZE);
    printf("\n");
    return 0;
}