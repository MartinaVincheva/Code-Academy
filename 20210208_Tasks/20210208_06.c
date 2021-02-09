/* 6. Напишете функция, която получава указател към масив с числа и връща
най голямото от тях.*/
#include <stdio.h>

unsigned int max(unsigned int *arr, int arrSize) {
    unsigned int i, res = 0;
    
    for (i = 0; i < arrSize; i++) {
        if (res < arr[i])
            res = arr[i];
    }

    return res;
}

int main(void) {
    unsigned int arr1[] = {505, 792, 967, 554, 221, 772, 151, 999, 352, 214, 826, 630, 343, 970, 956, 737};
    
    printf("%d\n", max(arr1, sizeof(arr1)/sizeof(unsigned int)));
    return 0;
}

