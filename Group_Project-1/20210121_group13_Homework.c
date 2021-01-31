/*"Напишете функция, която преброява колко думи има в един стринг, който й се подава като параметър."*/
#include <stdio.h>

int isDelimiter(char c)
{
    return ((c == ' ') || (c == ',') || (c == '.') || (c == '!') || (c == '?') );
}

int main(){
	
	char str[255] ;
	int i = 0;
    unsigned int WordCounter = 0; 
    printf("Enter your text here:\n");
    scanf("%s", str);

    printf(" your text is %s\n", &str);

    while(str[i] !='\0' ){
        if (isDelimiter(str[i++]))
            WordCounter++;
    } 
    
	
	printf("Number of words in this sentences are %d\n", WordCounter);
	
	return 0;
}