/*Задача 3. Дефинирайте и инициализирайте тримерен масив с по 5
елемента (5 x 5 x 5).*/
#include <stdio.h>

int main(void) {
    unsigned int arr1[5][5][5] = {
        {{ 1, 2, 3, 4, 5}, { 1, 2, 3, 4, 5}, { 1, 2, 3, 4, 5}, { 1, 2, 3, 4, 5}, { 1, 2, 3, 4, 5}},
        {{ 6, 7, 8, 9,10}, { 6, 7, 8, 9,10}, { 6, 7, 8, 9,10}, { 6, 7, 8, 9,10}, { 6, 7, 8, 9,10}},
        {{11,12,13,14,15}, {11,12,13,14,15}, {11,12,13,14,15}, {11,12,13,14,15}, {11,12,13,14,15}},
        {{16,17,18,19,20}, {16,17,18,19,20}, {16,17,18,19,20}, {16,17,18,19,20}, {16,17,18,19,20}},
        {{21,22,23,24,25}, {21,22,23,24,25}, {21,22,23,24,25}, {21,22,23,24,25}, {21,22,23,24,25}}
    };
    int i, j, k;

    for(i = 0; i < 5; i++){
        printf("\n");
        for (j = 0; j < 5; j++){
            printf("\n");
            for (k = 0; k < 5; k++){
                printf("%2d ", arr1[i][j][k]);
            }
        }
    }
    printf("\n");
    return 0;
}