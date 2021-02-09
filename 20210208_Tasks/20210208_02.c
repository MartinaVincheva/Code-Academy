/*Задача 2. Дефинирайте и инициализирайте двумерен масив с по 5
елемента (5 x 5). След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf.*/
#include <stdio.h>

int main(void) {
    unsigned int arr1[5][5];
    unsigned int row, column;

    for(row = 0; row < 5; row++) {
        for (column = 0; column < 5; column++) {
            printf("\nEnter[%d] [%d] - ", row, column);
            scanf("%d", &arr1[row][column]);
        }
    }
    printf("\nYou entered:");
    for(row = 0; row < 5; row++) {
        printf("\n");
        for (column = 0; column < 5; column++) {
            printf("%d ", arr1[row][column]);
        }
    }
    printf("\n");
    return 0;
}