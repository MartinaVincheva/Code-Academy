/* Задача 10.
Упражнение 10.Напишете функция reverse(s), която обръща символния низ
s. Използвайте я, за да напишете програма, която преобръща входа си ред
по ред.*/
#include <stdio.h>

/*const int strLen = 5;
char str[] = "Hello";
char rts[6];*/

//	     0  1  2  3  4  5
// str	[H][e][l][l][o][0]
// rts	[o][l][l][e][H][0]

int main(void){
    char c ;
    char str[256];
    int i = 0;

    while ((c = getchar()) != EOF){
        str[i] = c;
        i++;
    }
    printf('%c', str);



	/*int i = 0, j = 5;
	
	rst[j--] = '\0';
	rst[j--] = str[i++];
	rst[j--] = str[i++];
	rst[j--] = str[i++];
	rst[j--] = str[i++];
	rst[j--] = str[i++];
	printf("\"%s\" -> \"%s\"\n", str, rts);
	
	return(0);*/
}
