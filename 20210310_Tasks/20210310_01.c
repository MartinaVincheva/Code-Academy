/* Задача 1 . Напишете програма, която сравнява два файла, като отпечатва
първият ред на който се различават и на двата файла. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getLinefromFile(FILE *f)
{
    char *line = malloc(2000), *p = line;

    *p = '\0';
    for (;;)
    {
        char c = getc(f);
        if ((c == EOF) || (c == '\n'))
        {
            return line;
        }
        *p++ = c;
        *p = '\0';
    }
}

int main()
{
    FILE *fpt = NULL, *fpt1 = NULL;

    fpt = fopen("C:\\Users\\Marti\\codeAcademy\\gitRepo\\Code-Academy\\20210308_Tasks\\file13.txt", "r");
    fpt1 = fopen("C:\\Users\\Marti\\codeAcademy\\gitRepo\\Code-Academy\\20210308_Tasks\\file16.txt", "r");

    if (fpt != NULL && fpt1 != NULL)
    {
        for (;;)
        {
            char *line1 = getLinefromFile(fpt);
            char *line2 = getLinefromFile(fpt1);

            if (0 != strcmp(line1, line2))
            {
                printf("Line 1 :\"%s\" is different from Line 2 :\"%s\" \n", line1, line2);
                break;
            }
            free(line1);
            free(line2);
        }
    }
    else
    {
        printf("Failed to open files\n");
    }

    fclose(fpt);
    fclose(fpt1);

    return 0;
}
