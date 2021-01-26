/* 3.Напишете програма, която преброява шпациите, табулациите и
новите редове.*/
#include <stdio.h>

int main(void){
    char c; 
    int counterNewLine =0;
    int counterSpace =0;
    int counterTab =0;

    while((c = getchar()) != EOF){
        if (c == '\n' ){
            ++counterNewLine;
        } else if (c == ' ' ){
            ++counterSpace;
        } else if (c == '\t' ){
            ++counterTab;
        }
    }
    printf("Number of new lines are :%d\n", counterNewLine);
    printf("Number of spaces are :%d\n", counterSpace);
    printf("Number of tabs are :%d\n", counterTab);

    return 0;
}
