#include <stdio.h>
char str[] = "Hello";

//	     0  1  2  3  4  5
// str	[H][e][l][l][o][0]
//			   |  |
//			   v  v
// str	[H][e][x][x][o][0]


int main(void)
{
	printf("Before \"%s\"\n", str);

	str[2] = str[3] = 'x';
	
	printf("After  \"%s\"\n", str);
	
	return(0);
}
