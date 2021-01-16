#include <stdio.h>

static int myVar = 0;

void test(void){
	myVar++;
}

int main(void){
	test();
	test();
	test();
	
	printf("%d\n", myVar);

	return 0;
}

