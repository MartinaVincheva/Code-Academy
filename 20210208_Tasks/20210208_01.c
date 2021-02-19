/*Задача 1. Дефинирайте и инициализирайте едномерен масив с 5
елемента. След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf.*/
#include <stdio.h>

int main(void)
{
    unsigned char arr1[5];

    printf("\nPlease enter array from 5 elements: ");
    scanf("%s", arr1);
    for (int i = 0; i < sizeof(arr1); i++)
    {
        printf("\nYou entered for elment %d = %c", i, arr1[i]);
        printf("\n");
    }
    return 0;
}