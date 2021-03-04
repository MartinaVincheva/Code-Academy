/*Пребройте символите, подавани на конзолата, с функцията getchar(); */
#include <stdio.h>

int main(void)
{
    int c;
    int counter = 0;

    while ((c = getchar()) != EOF)
        counter++;

    printf("\n Number of simbols are :%d\n", counter);

    return 0;
}
