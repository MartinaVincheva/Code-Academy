#include <stdio.h>

int getRandom(void) {
	static int A = 1;

	A ^= A << 13;
	A ^= A >> 17;
	A ^= A << 5;
	return(A);
}

int main() {
	printf("Random 1:%d\n", getRandom());
	printf("Random 2:%d\n", getRandom());
	printf("Random 3:%d\n", getRandom());
	printf("Random 4:%d\n", getRandom());
	printf("Random 5:%d\n", getRandom());
	return 0;
}