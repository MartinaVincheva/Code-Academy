/*Задача 3. Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво.
I did, did I?*/
#include <stdio.h>
#include <string.h>

void PalindromeCheck(unsigned int *arr, int l) {
    int beg = 0;
    int end = l - 1;
    int mid = l / 2;

    for( beg = 0 ; beg < mid ; beg++) {
        if (arr[beg] != arr[end]){
            printf("Array is not Palindrome.\n");
            break;
        }
        end --;
    }
    if (beg == mid)
    printf("Array is Palindrome.\n");  
}

int main(void) {
    int arr  [10] = {23, 91, 36, 4, 9, 99, 87, 11, 2,33} ;
    int arr1 [10] = {23, 91, 36, 4, 9, 9, 4, 36, 91, 23} ;
    
    PalindromeCheck(arr,10);
    PalindromeCheck(arr1,10);
    return 0;
}