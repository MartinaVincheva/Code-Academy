/* Задача 13. Напишете програма, която да намери общия брой на
редовете в текстови файл.
Създайте файл, който съдържа няколко реда текст.
Внимавайте къде позиционирате файла.
Отворете файла. Използвайте променлива, която да
брои броя на редовете.*/
#include <stdio.h>

int main()
{
    FILE *fpt = NULL;
    char c;
    int counter = 0;

    fpt = fopen("C:\\Users\\Marti\\codeAcademy\\gitRepo\\Code-Academy\\20210308_Tasks\\file13.txt", "r");
    if (NULL == fpt)
    {
        printf("Failed to open file13.txt.\n");
    }
    else
    {
        while ((c = getc(fpt)) != EOF)
        {
            if (c == '\n')
                counter += 1;
        }
    }
    printf("Lines are %d.\n", counter + 1);
    fclose(fpt);
    return 0;
}