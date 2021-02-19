#include <stdio.h>

void param_test(int *formal){// създава се копие на подадения аргумент
    printf("formal = %d\n", *formal);// принтираме копието
    *formal = 100; //променяме стойността му на 100
    printf("formal = %d\n", *formal);// принтираме стойността му
}//копието се изтрива
int main(){
    int actual = 50;// декларация и инициализация на променлива
    int *p = &actual;
    printf("actual = %d\n", actual);//50
    param_test(p);// подаване на променливата като аргумент
    printf("actual = %d\n", actual);//след излизане от ф та стойността е пак50
return 0;
}