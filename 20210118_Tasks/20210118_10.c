#include <stdio.h>

int main(){
	int nResult = 13;
	int nX = 4;
	
	printf("Result = %d\n", nResult);
	nResult += nX;
	printf("Result += %d -> %d\n", nX, nResult);
	nResult = 1 ;
	nResult <<= nX;
	printf("Result <<= %d -> %d\n", nX, nResult);
	nResult = 2 ;
	nResult *= nX;
	printf("Result *= %d -> %d\n", nX, nResult);
	nResult = 3 ;
	nResult %= nX;
	printf("Result %= %d -> %d\n", nX, nResult);
	nResult = 4 ;
	nResult /= nX;
	printf("Result /= %d -> %d\n", nX, nResult);
	
	return 0;	
}