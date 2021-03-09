/* Задача 7. Напишете символ в текстов файл.
Int fputc(int ch, FILE *pfile);
Първият параметър е символът, който искаме да отпечатаме (изразен като
int, т.е. номер в ASCII таблицата), вторият е самия файл, в който ще пишем.
Ако е успешно, функцията връща това, което искаме да изпише.
При грешка функцията връща EOF.
putc () работи със същите аргументи, но е дефинирана като макрос в
стандартната библиотека.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fpt = NULL;

    fpt = fopen("C:\\Users\\Marti\\codeAcademy\\gitRepo\\Code-Academy\\20210308_Tasks\\file7.txt", "w");

    if (NULL != fpt)
    {
        int number = fputc(77, fpt);
    }
    else
    {
        printf("\nFailed to open file\n");
    }

    fclose(fpt);
    return 0;
}