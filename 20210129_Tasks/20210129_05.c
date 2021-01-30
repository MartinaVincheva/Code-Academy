/*Задача 5. Напишете програма на С, която чрез функция проверява дали дадено число е четно или не. */
#include <stdio.h>

unsigned int EvenOdd(unsigned int number){
    
    printf("Please enter decimal number to check if it is Odd or Even!\n");
    scanf(" %d", &number);
    if (number % 2 == 0){
        printf("The number that you entered is even");
    }else if (number % 2 !=0){
        printf("The number that you entered is odd");
    } else {
        printf("You entered wrong input! Please enter decimal number!");
    }
    
}
int main() {
    unsigned int n = EvenOdd(n);
	
	return 0;
}

