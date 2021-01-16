#include <stdio.h>
char str[] = "HELLO";

int main(void)
{
	
	printf("Before \"%s\"\n", str);

	str[0] += ('a' - 'A');
	str[1] += ('a' - 'A');
	str[2] += ('a' - 'A');
	str[3] += ('a' - 'A');
	str[4] += ('a' - 'A');
	
	printf("After  \"%s\"\n", str);
	
	return(0);
}
