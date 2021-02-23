/*Задача 7. Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана.*/
#include <stdio.h>
#include <string.h>

union Test1
{
    int Inum;
    float Fnum;
    char Arr[128];
};

int main()
{
    union Test1 x;
    union Test1 x1;
    union Test1 x2;
    strcpy(x.Arr, "ABC");
    x1.Fnum = 2.2;
    x2.Inum = 10;
    printf("Array : %s ,Float Number :  %.2f ,Int number : %d .\n", x.Arr, x1.Fnum, x2.Inum);
    return 0;
}