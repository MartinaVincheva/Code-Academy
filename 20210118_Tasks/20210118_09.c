#include <stdio.h>

int main(){
	int iX = 13;
	int iY = 44;
	int iResult = 0;
	
	iResult = iX - iY;
	printf("%d - %d = %d\n", iX, iY, iResult);
	iResult = iY / iX ;
	printf("%d / %d =%d\n", iY, iX, iResult);
	iResult = iY % iX ;
	printf("%d / %d Reminder: %d\n", iY, iX, iResult);
	iResult = iY * iX ;
	printf("%d * %d =%d\n", iY, iX, iResult);
	iResult = iY + iX ;
	printf("%d + %d =%d\n", iY, iX, iResult);
	
	iResult = iY * iX ;
	printf("%f * %f =%f\n",(float) iY, (float)iX,(float) iResult);
	iResult = iY + iX ;
	printf("%f + %f =%f\n", (float)iY,(float) iX,(float) iResult);
	
	return 0;	
}