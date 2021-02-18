/*Задача11 - 12. Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char arrBigLetters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char arrSmallLetters[] = "abcdefghijklmnopqrstuvwxyz";
char arrSymbols[] = "!#$&*+-./^_(){}[]:<>=?|";
char arrNumbers[] = "0123456789";

char getPasswordElem(char *s, char len)
{
    return s[rand() % len];
}

char *generatePass(char *s, char size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        switch (rand() % 4)
        {
        case 0:
            s[i] = getPasswordElem(arrBigLetters, sizeof(arrBigLetters) - 1);
            break;

        case 1:
            s[i] = getPasswordElem(arrSmallLetters, sizeof(arrSmallLetters) - 1);
            break;

        case 2:
            s[i] = getPasswordElem(arrSymbols, sizeof(arrSymbols) - 1);
            break;

        case 3:
            s[i] = getPasswordElem(arrNumbers, sizeof(arrNumbers) - 1);
            break;

        default:
            break;
        }
    }
    s[i] = '\0';
    return (s);
}

int main()
{
    char password[11];
    char choise;
    char *(*gp)(char *, char) = &generatePass;

    srand(time(NULL));
    printf("Welcome!\n");
    do
    {
        printf("If you like this %d letter password : %s\n", sizeof(password) - 1, gp(password, sizeof(password) - 1));
        printf("Press 1 for OK or any other number for new proposal :");
        scanf("%d", &choise);
    } while (choise != 1);
    printf("Thank you! Have a nice day!\n");

    return 0;
}