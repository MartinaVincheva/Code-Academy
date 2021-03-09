/* Задача 14. Напишете програма, която да обръща всички символи в
текстов файл, с главни букви запишете резултата в друг
временен файл. След това преименувайте новия файл
с името на оригиналния файл и изтрийте временното
име. Отпечатайте съдържанието на файл на
стандартния изход с главни букви.*/
#include <stdio.h>
#include <stdlib.h>

char atoA(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        c = c - 32;
    }
    return c;
}

int main(int argc, char *argv[])
{
    FILE *fpIn = NULL;
    FILE *fpOut = NULL;
    char c;
    fpIn = fopen("C:\\Users\\Marti\\codeAcademy\\gitRepo\\Code-Academy\\20210308_Tasks\\file14.txt", "r");
    fpOut = fopen("C:\\Users\\Marti\\codeAcademy\\gitRepo\\Code-Academy\\20210308_Tasks\\outfile14.txt", "w");
    if (NULL != fpIn && NULL != fpOut)
    {
        while ((c = getc(fpIn)) != EOF)
        {
            c = atoA(c);
            fprintf(fpOut, "%c", c);
        }
    }
    else
    {
        printf("Error to open file\n");
    }

    fclose(fpIn);
    fclose(fpOut);
    remove("C:\\Users\\Marti\\codeAcademy\\gitRepo\\Code-Academy\\20210308_Tasks\\file14.txt");
    rename("C:\\Users\\Marti\\codeAcademy\\gitRepo\\Code-Academy\\20210308_Tasks\\outfile14.txt", "C:\\Users\\Marti\\codeAcademy\\gitRepo\\Code-Academy\\20210308_Tasks\\file14.txt");
    return 0;
}