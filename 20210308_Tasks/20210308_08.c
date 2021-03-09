/* Задача 8. Напишете стринг в текстов файл.
int fputs (const char *str, FILE *pfile);
Първият параметър е указател към стринга, който искаме да
запишем, вторият параметър е указател към файла, в който ще
пишем.
Функцията ще записва символи от стринга догато достигне
терминиращ символ \0, но не го пише в новия файл.*/
#include <stdio.h>
int main()
{
    FILE *fpt = NULL;
    fpt = fopen("C:\\Users\\Marti\\codeAcademy\\gitRepo\\Code-Academy\\20210308_Tasks\\test8.txt", "wt+");
    if (fpt != NULL)
        fputs("This is my text.", fpt);
    fputs("This is my additional text", fpt);
    fclose(fpt);
    return 0;
}