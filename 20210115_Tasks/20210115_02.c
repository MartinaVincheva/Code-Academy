#include <stdio.h>

int main() 
{
	printf("Size of literal default integer %d\n",sizeof(3));
	printf("Size of literal U: %ld\n", sizeof(3U));
	printf("Size of literal I: %ld\n", sizeof(3I));
	printf("Size of literal L: %ld\n", sizeof(3L));
	printf("Size of literal LL: %ld\n", sizeof(3LL));
	printf("Size of literal default floating point: %ld\n",sizeof(3.1));
	printf("Size of literal F: %ld\n", sizeof(3.1F));
	printf("Size of literal D: %ld\n", sizeof(3.1D));
	printf("Size of literal L: %ld\n", sizeof(3.1L));
}