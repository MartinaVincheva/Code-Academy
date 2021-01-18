#include <stdio.h>

int main(){
	int x = 10,y = 10;
	int true = ++x + x || y;
		
	printf("True = %d\n", true);
	
	return 0;	
}

