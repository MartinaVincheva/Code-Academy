# include<stdio.h>

void bin(unsigned n) 
{ 
	unsigned i; 
	for (i = 1 << 7; i > 0; i = i >> 1 ) 
		(n & i)? printf("1"): printf("0"); 
	printf("\n");
}
	
int main ()
{
	signed char a = -10;
	bin(a);
	unsigned char z = 0;
	bin(z);
	z = a + z;

	printf("%d\n", z);
	bin(z);

	return 0;
}
