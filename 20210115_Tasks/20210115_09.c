#include <stdio.h>

int main(){
	
	char s[] = "Hi";
	int i = 0;
	
while(s[i] !='\0'){
	printf("%c", s[i]);
	i++;
}
	printf("\n");
	printf("Number of chars in s is %d\n", i);
	
	return 0;
}