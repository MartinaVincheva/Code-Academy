/* Задача 6. Отворете и прочетете съдържанието от файл с fscanf.
int fscanf(FILE *stream, const char *format,....)
Има същите формати, както scanf.
Първият аргумент е пойнтер към файла, от който ще четем.
Вторият аргумент е формата- Стрингът може да има следните параметри-
спейс, неспейс, спецификатори;*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fpt = NULL;
    fpt = fopen("C:\\Users\\Marti\\codeAcademy\\gitRepo\\Code-Academy\\20210308_Tasks\\infile5.txt", "r");

    if (NULL != fpt)
    {
        for (;;)
        {
            int number = 0;
            fscanf(fpt, "%d", &number);
            if (feof(fpt))
                break;
            printf("%d \n", number);
        }
    }
    else
    {
        printf("\nFailed to open file\n");
    }
    fclose(fpt);
    return 0;
}