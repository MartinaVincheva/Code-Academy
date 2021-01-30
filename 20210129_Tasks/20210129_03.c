/*Задача 3. Напишете функция, която връща резултат (а+в)*4  */
#include <stdio.h>

int sumAndMultiply(unsigned int a, unsigned int b){
    
    return (a+b)*4;
}

int main(void) {
    int a = 5, b = 10;
    int result = sumAndMultiply(a,b);
    printf("(%d + %d)*4 = %d\n", a ,b, result);
	
	return 0;
}

