/*Задача 2. Напишете функция int printArr(int a[], int l), която
получава като първи аргумент началото на масив от интеджери,
а като втори неговата дължина и принтира всички елементи на
масивa един по един до неговия край. */
#include <stdio.h>

int printArr(int a[],int l){
    int i;
    for(i = 0; i < l ; i++)
        printf("%d \n", a[i]);
}
int main() {
    int arrInt[] = {10,71,62,3,54,5,56,7,48,9,10};
    int leng = 11;
    printArr(arrInt,leng);
    return 0;
}
