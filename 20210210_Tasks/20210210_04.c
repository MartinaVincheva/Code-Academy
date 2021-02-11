/*Напишете програма, която да генерира случайна парола от 6 букви
докато user а я хареса.
Вариант 1: може да използвате цикли while/for + стрингове
Вариант 2: използвайте функция
Указания:
1. Генерирайте парола
2. Проверете дали потребителя е харесва
3. Повторете докато потребителя си хареса паролата*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

char arrLetters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

char getRandomLetter(void) {
    return(arrLetters[rand() % (sizeof(arrLetters) - 1)]);
}

char generatePass(char *s) {
    char i;
    char size = 6;
    char *p = s;

    for ( i = 0; i < size; i++) {
        *p++ = getRandomLetter();
    }
    *p = '\0';
}

int main(void) {
    char password[7];
    char choise;

    srand (time(NULL));
    printf("Welcome!\n");
    do {
        generatePass(password);
        printf("If you like this 6 letter password : %s\n", password);
        printf("Press 1 for OK or any other number for new proposal :");
        scanf("%d",&choise);
    } while (choise != 1);
    printf("Thank you! Have a nice day!\n");

    return 0;
}