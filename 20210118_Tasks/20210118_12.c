#include <stdio.h >

int main() {
	int nX = 0; 
	int nY = 0;
	printf("Please give value of nY and nX:\n");
	scanf("%d", &nY);
	scanf("%d", &nX);
	
	if (nX == nY ) {
		printf("%d and %d are equal \n", nX , nY);
	} else {
		printf("%d and %d are not equal \n", nX , nY);
	}

	if (nX > nY ) {
		printf ("%d is greater than %d \n", nX , nY );
	} else {
		printf("%d is lower than %d \n", nX , nY);
	}

	if (nX >= nY ) {
		printf ("%d is greater or equal of %d \n", nX , nY );
	} else {
		printf("%d is lower or equal of %d \n", nX , nY);
	}
	return 0;
}
 