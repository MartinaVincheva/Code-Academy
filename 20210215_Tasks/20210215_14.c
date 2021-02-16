/*Задача 14.Решете задачата за генериране на 6 буквена парола с пойнтери*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char arrLetters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

char generatePass(char *s)
{
    char i;
    char size = 6;
    char *p = s;

    for (i = 0; i < size; i++)
    {
        *p++ = *(arrLetters + (rand() % (sizeof(arrLetters) - 1)));
    }
    *p = '\0';
}

int main(void)
{
    char password[7];
    char choise;

    srand(time(NULL));
    printf("Welcome!\n");
    do
    {
        generatePass(password);
        printf("If you like this 6 letter password : %s\n", password);
        printf("Press 1 for OK or any other number for new proposal :");
        scanf("%d", &choise);
    } while (choise != 1);
    printf("Thank you! Have a nice day!\n");

    return 0;
}