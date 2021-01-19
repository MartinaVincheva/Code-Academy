#include <stdio.h>

int main(){
    int A = 1, B = 0; 
    int Result1 = !(A && B); 
    printf("!(A && B) Result1 = %d\n", Result1);

    int Result2 = !A || !B; 
    printf("!A || !B Result2 = %d\n", Result2);

    int Result3 = !(A || B);
    printf("!(A || B) Result3 = %d\n", Result3);

    int Result4 = !A && !B;
    printf("!A && !B Result4 = %d\n", Result4);
    
    if (Result1 != 0 , Result2 != 0){
		printf("!(A && B) = !A || !B : Both conditions are true \n");
	}
    if (Result3 == 0 , Result4 == 0){
		printf("!(A || B) = !A && !B : Both conditions are true \n");
	}else{
        printf("Error! Some of the laws is not true!\n");
    }

    return 0;
}