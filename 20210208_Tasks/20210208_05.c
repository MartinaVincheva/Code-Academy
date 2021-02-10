/* Задача 5*. Напишете програма, която генерира “случайна разходка” из
елементите на двумерен масив от тип char с размер 10 х 10. Преди разходката
всички елементи на масива съдържат символа ‘.’ и след като елемента е
посетен в него се записва поредната буква от латинската азбука т.е. на първия
посетен елемент се записва буквата ‘А’, а на последния буквата ‘Z’. Програмата
трябва да се разхожда от елемент на елемент в следната последователност:
от елемента, на който е в момента може да се премести един елемент на горе,
на долу, на ляво или на дясно. Не може да се премества на произволна
позиция. Преди всяко преместване проверете дали няма да излезете извън
масива и дали позицията вече не е заета от някоя буква т.е. елемента да е
посетен вече. Ако горните условия са изпълнени се преместете в желатана
посока. Ако всичките 4 дестинации са блокирани вашата програма трябва да
спре.
Подсказка: Използвайте функциите srand() и rand() за да генерирате слу
чайните числа. Използвайте int n = rand() % 4; за да генерирате числа от 1 до 4.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define arrayW 10
#define arrayH 10

#define UP_DIR 0
#define RIGHT_DIR 1
#define DOWN_DIR 2
#define LEFT_DIR 3

char arr1[arrayW][arrayH];
char currentLetter = 'A';

void clearArray(char arr[arrayW][arrayH], char arrW, char arrH) {
    char i, j;

    for(i = 0; i < arrH; i++) {
        for(j = 0; j < arrW; j++) {
            arr[j][i] = '.';
        }
    }
}

void printArray(char arr[arrayW][arrayH], char arrW, char arrH) {
    char i, j;

    for(i = 0; i < arrH; i++) {
        for(j = 0; j < arrW; j++) {
            printf("%c ", arr[j][i]);
        }
        printf("\n");
    } 
    printf("\n");
}

void getRandomLocation(char * x, char * y) {
    *x = rand() % arrayW;
    *y = rand() % arrayH;
}

char getRandomDirection(void) {
    return(rand() % 4);
}

int isUpAllowed(char arr[arrayW][arrayH], char x, char y) {
    return ((y - 1) >= 0) && (arr[x][y - 1] == '.');
}

int isRightAllowed(char arr[arrayW][arrayH], char arrW, char x, char y) {
    return ((x + 1) < arrW) && (arr[x + 1][y] == '.');
}

int isDownAllowed(char arr[arrayW][arrayH], char arrH, char x, char y) {
    return ((y + 1) < arrH) && (arr[x][y + 1] == '.');
}

int isLeftAllowed(char arr[arrayW][arrayH], char x, char y) {
    return ((x - 1) >= 0) && (arr[x - 1][y] == '.');
}

void walkArray(char arr[arrayW][arrayH], char arrW, char arrH, char x, char y) {
    char direction;
    char upChecked = 0, rightChecked = 0, downChecked = 0, leftChecked = 0;

    do {
        direction = getRandomDirection();
        switch(direction) {
            case UP_DIR:
                if (!upChecked && isUpAllowed(arr, x, y)) {
                    // Move up
                    y--;
                    arr[x][y] = currentLetter++;
                    rightChecked = 0, downChecked = 0, leftChecked = 0;
                } else {
                    upChecked = 1;
                }
            break;
            case RIGHT_DIR:
                if (!rightChecked && isRightAllowed(arr, arrW, x, y)) {
                    // Move right
                    x++;
                    arr[x][y] = currentLetter++;
                    upChecked = 0, downChecked = 0, leftChecked = 0;
                } else {
                    rightChecked = 1;
                }
            break;
            case DOWN_DIR:
                if (!downChecked && isDownAllowed(arr, arrH, x, y)) {
                    // Move down
                    y++;
                    arr[x][y] = currentLetter++;
                    upChecked = 0, rightChecked = 0, leftChecked = 0;
                } else {
                    downChecked = 1;
                }
            break;
            case LEFT_DIR:
                if (!leftChecked && isLeftAllowed(arr, x, y)) {
                    // Move left
                    x--;
                    arr[x][y] = currentLetter++;
                    upChecked = 0, rightChecked = 0, downChecked = 0;
                } else {
                    leftChecked = 1;
                }
            break;
        }
    } while ((currentLetter <= 'Z') && !(upChecked && rightChecked && downChecked && leftChecked));
}


int main() {
    char x, y;

    srand(time(NULL));
    clearArray(arr1, arrayW, arrayH);
    getRandomLocation(&x, &y);
    walkArray(arr1, arrayW, arrayH, x, y);
    printArray(arr1, arrayW, arrayH);
    return 0;
}


