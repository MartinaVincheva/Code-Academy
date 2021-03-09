/* Задача 16. Напишете програма, която премахва от файл номер на ред и
премахва този ред от файла. (Hint: Не трийте от оригиналния файл, а
запишете съдържанието на файла без конкретния ред в друг файл).*/
#include <stdio.h>

int main()
{
    FILE *fpt = NULL;
    FILE *fpt1 = NULL;
    char c;
    int line = 0, lineToRemove = 5;

    fpt = fopen("C:\\Users\\Marti\\codeAcademy\\gitRepo\\Code-Academy\\20210308_Tasks\\file13.txt", "r");
    fpt1 = fopen("C:\\Users\\Marti\\codeAcademy\\gitRepo\\Code-Academy\\20210308_Tasks\\file16.txt", "w");

    if (fpt != NULL && fpt1 != NULL)
    {
        while ((c = getc(fpt)) != EOF)
        {
            if (c == '\n')
                line++;
            if (line == lineToRemove)
                continue;
            fprintf(fpt1, "%c", c);
        }
    }
    else
    {
        printf("Failed to open file\n");
    }

    printf("Lines after eliminate line 5 :%d lines", line);
    fclose(fpt);
    fclose(fpt1);
    return 0;
}