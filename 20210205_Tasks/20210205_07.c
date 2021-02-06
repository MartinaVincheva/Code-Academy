/*Задача 7. Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено.*/
#include <stdio.h>
#include <string.h>

int strend(char *s, char *t){
    int l = strlen(s) - strlen(t);
    s = s + l;
    int end = strcmp(s,t);
        if (end == 0)
            return 1;
        else
            return 0;
}
int main() {
    char s[] = "Programing language";
    char t[] = "table";
    char u[] = "age";
    int res = strend(s, t);
    
    if (res == 0)
        printf("Result is: %d .There is no match in this array.\n", res);
        else if(res == 1)
            printf("Result is: %d .Word %s match in the array\n", res, t);
    
    int res1 = strend(s,u);
    
    if (res1 == 0)
        printf("Result is: %d .There is no match in this array.\n", res);
        else if(res1 == 1)
            printf("Result is: %d .The matched word is : %s\n", res, u);
    return 0;
}