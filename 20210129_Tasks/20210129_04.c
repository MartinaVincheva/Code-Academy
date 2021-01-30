/*Задача 4. Напишете функция, която връща резултат a*2 + b*c.  */
#include <stdio.h>

int multiplyAndSum(unsigned int a, unsigned int b, unsigned int c){
    
    return a*2 + b*c ;
}

int main(void) {
    int a = 5, b = 10, c =15;
    int result = multiplyAndSum(a,b,c);
    printf("%d*2 + %d*%d = %d\n", a ,b,c, result);
	
	return 0;
}

