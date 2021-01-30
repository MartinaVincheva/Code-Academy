/*Задача 6. Напишете програма на С, която чрез функция да обръща десетични числа в двоични. */
#include <stdio.h>

unsigned decToBin(unsigned int number){
     printf("Binary value of your number is: ");
     unsigned i;
     unsigned iCheck = 31;
     for (i = 1 << iCheck; i > 0; i = i >> 1){
       	(number & i) ? printf("1") : printf("0");
    }
    return number;
}

int main() {
    int i ;
    printf("Please enter decimal number: \n");
    scanf(" %d", &i);
    decToBin(i);

	return 0;
}

