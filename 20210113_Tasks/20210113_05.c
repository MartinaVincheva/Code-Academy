# include<stdio.h>

int main() {
	
	char cValue = 'b';
	printf("\n%d\n",sizeof (cValue));
	
	int iValue = 100;
	printf("\n%d\n",sizeof (iValue));
	
	long long int lValue = 11111111;
	printf("\n%d\n",sizeof (lValue));
	
	float fValue = 3.14;
	printf("\n%d\n",sizeof (fValue));
	
	unsigned int uiValue = 100;
	printf("\n%d\n",sizeof (uiValue));
	
	unsigned long int uliValue = 100;
	printf("\n%d\n",sizeof (uliValue));
	
	return 0;
}