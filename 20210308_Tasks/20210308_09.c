/* Задача 9. Напишете текст с форматиращ параметър.
int fprint(FILE* stream, const char *forma…);
Първият параметър е файл стрийм, вторият е
форматиращият знак, следван от броя му и т.н.
Форматиращият знак може да е спейс, спецификатор и
т. н.
При успешно изпълнение функцията връща броя на
записаните символи, при грешка връща негативна
стойност.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fpt = NULL;
    fpt = fopen("C:\\Users\\Marti\\codeAcademy\\gitRepo\\Code-Academy\\20210308_Tasks\\file9.txt", "w");
    int written_bytes = fprintf(fpt, "%s and a number %d", "A string", 2021);
    if (written_bytes > 0)
    {
        printf("Return is %d. Information is saved in file9.txt.\n");
    }
    else
    {
        printf("ERROR, Information is not saved.\n");
    }

    fclose(fpt);
    return 0;
}