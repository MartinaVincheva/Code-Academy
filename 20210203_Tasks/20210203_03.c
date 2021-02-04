/*Задача 3.Напишете функцията int linSearch(int a[], int l, int d),
която получава като първи аргумент началото на масив а, втория
аргумент е дължината на масива, а третия аргумент е числото,
което търсим. Претърсете масива елемент по елемент и ако
някой елемент съвпада с търсеното число върнете позицията на
която се намира този елемент. В противен случай върнете 1. */
#include <stdio.h>

int linSearch(int a[], int l, int d){
    int i;
    for(i = 0; i < l; i++)
        if(a[i] == d)
        return i;
    return 1;
    
}
int main(void) {
    int a[] = {1,70,21,32,17,12,5,8,0};
    int d = 5,l = 10, find;

    find = linSearch(a, l, d);
    printf("Searched number is at position: %d in the array and %d in the line ", find, find +1);    
    return 0;
}
