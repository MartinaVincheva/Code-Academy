/*Задача7. Хванете дълъг стринг и пребройте колко пъти се среща всяка буква от
азбуката в него. Запишете резултата в масив за всяка буква.
Може ли да оптимизирате тази задача и да не се налага да въртим два
цикъла?
Как бихте направили същото, използвайки case? */
#include <stdio.h>

void countLetters(char s[], int n[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= 'A' && s[i] <= 'z')
        {
            n[s[i] - 'A']++;
        }
        i++;
    }
}

int main()
{
    char str1[] = "The quick brown fox jumps over the lazy dog.THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG.";
    int countedLetters['z' - 'A' + 1] = {0};
    int c;
    void (*flet)(char *, int *) = &countLetters;

    printf("Counted letters in the string are :\n");
    flet(str1, countedLetters);
    for (c = 0; c < ('z' - 'A' + 1); c++)
    {
        if ((c + 'A') <= 'Z' || (c + 'A') >= 'a')
        {
            printf("%c  -  %d\n", c + 'A', countedLetters[c]);
        }
    }
    printf("\n");
    return 0;
}