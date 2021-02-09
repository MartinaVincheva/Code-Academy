/* Задача 4. Даден е едномерен масив с N елемента (вие изберете
стойност на N),напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double float. */
#include <stdio.h>

double average(unsigned int *arr, int arrSize) {
    int i;
    double res = 0.0;

    for (i = 0; i < arrSize; i++){
        res += arr[i];
    }
    res /= arrSize;

    return res;
}

int main(void) {
    unsigned int arr1[] = {505, 792, 967, 554, 221, 772, 151, 352, 214, 826, 630, 343, 970, 956, 737};
    
    printf("%f\n", average(arr1, sizeof(arr1)/sizeof(unsigned int)));
    return 0;
}
