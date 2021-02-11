/*Задача 7. Разгледайте и имплементирайте quicksort алгоритъма.*/
#include <stdio.h>

void quicksort(int a[], int l, int r);
void swap(int a[], int i, int j);

int main(){
    int ArrInt[] = { 100, 2, 30, 4, 50, 6};
    

    quicksort(ArrInt,6,6);
    return 0;
}

void quicksort(int a[], int l, int r){
    int i, last;
    void swap(int a[], int i, int j);
    
    if (l >= r){
        return;
    }
    swap(a, l, (l + r) / 2);
    last = l;
    for (i = l + 1; i <= r; i++){
        if (a[i] < a[l]){
            swap(a, ++last, i);
        }
    }
    swap(a, l, last);
    quicksort(a, l, last - 1);
    quicksort(a, last + 1, r);
}

void swap(int a[], int i, int j){
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

