/*Задача15. Напишете програма аналог на спортния тотализатор.
Използвайте функции.
Насоки:
1.Давате право на избор на играча да избере тотализатор, в който
ще си пробва късмета: (5 от 35), (6 от 42) или (6 от 49)
2.При всяко завъртане програмата изписва 1 произволно число,
което не е извадено до момента.
3.Програмата вади числата, нужни за избраната игра (5 или 6).*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void totalizator(int choice)
{
    int n;
    if (choice == 1)
    {
        int min = 5;
        int max = 35;
        for (int i = 0; i < min; i++)
        {
            n = (rand() % (max - min + 1)) + min;
            printf("Your random numbers are : %d ", n);
        }
        printf("\n");
    }
    if (choice == 2)
    {
        int min = 6;
        int max = 42;
        for (int i = 0; i < min; i++)
        {
            n = (rand() % (max - min + 1)) + min;
            printf("Your random numbers are : %d ", n);
        }
        printf("\n");
    }
    if (choice == 3)
    {
        int min = 6;
        int max = 49;
        for (int i = 0; i < min; i++)
        {
            n = (rand() % (max - min + 1)) + min;
            printf("Your random numbers are : %d ", n);
        }
        printf("\n");
    }
}

int main(void)
{
    int choice;
    srand(time(NULL));
    void (*toto)(int) = &totalizator;
    printf("Welcome!\nPlease chose which game you want to play: \n1 - (5 of 35)\n2 - (6 of 42)\n3 - (6 of 49)\nenter your choice: ");
    scanf("%d", &choice);
    toto(choice);
    return 0;
}
