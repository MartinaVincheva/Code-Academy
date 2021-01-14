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
	unsigned char a = 10;
	bin(a);
	signed char z = -127;
	bin(z);
	char res = a + z;
	bin(res);

	printf("%d\n", res);
	
	unsigned char res1 = a + z;
	bin(res);
	printf("%d\n",res1);

	return 0;
}
