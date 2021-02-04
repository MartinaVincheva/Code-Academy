/*Задача 2. Напишете функция int printArr(int a[], int l), която
получава като първи аргумент началото на масив от интеджери,
а като втори неговата дължина и принтира всички елементи на
масивa един по един до неговия край. */
#include <stdio.h>

int printArr(int a[],int leng){
    int i;
    for ( i=0 ; ((i<leng) && (a[i] != 0)); i++ )
            

}
int main() {
    int arrInt[] = {0,1,2,3,4,5,6,7,8,9,10};
    int leng = 11;
    printArr(arrInt,leng);
    return 0;
}
