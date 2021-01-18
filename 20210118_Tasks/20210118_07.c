#include <stdio.h>

int main(){
	int nA = 1;
	int nB = (nA == 1 ? 2 : 0);
	unsigned int ValueOfnA ;
	
	printf("Please enter nA number\n");
	scanf("nA = %d", &ValueOfnA);
	printf("nA value is %d\n", nA);
	printf("nB value is %d\n", nB);
	
	(nA > nB) ? printf("nA is bigger than nB", nA) : printf("nB is bigger than nA", nB);
	
	return 0;	
}