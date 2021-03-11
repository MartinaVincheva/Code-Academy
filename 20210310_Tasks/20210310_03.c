/* Задача 3 . Напишете програма за отпечатване на файловете добавени след а.ехе ,
като започнете всеки нов на нова страница със заглавие и номере на всяка
страница за всеки файл. */
#include <stdio.h>
#include <stdlib.h>

#define MAXBOTTOM 3
#define MAXHEAD 5
#define MAXSIZEOFLINE 100
#define MAXPAGE 44

int heading(char *name, int pageNum)
{
    int ln = 3;
    fptrintf(stdout, "\n\n");
    fptrintf(stdout, "%s page %d\n", name, pageNum);
    while (ln++ < MAXHEAD)
    {
        fptrintf(stdout, "\n");
        return ln;
    }
}

void filePrint(FILE *fpt, char *name)
{
    int lineNum, pageNum = 1;
    char line[MAXSIZEOFLINE];
    lineNum = heading(name, pageNum++);
    while (fgets(line, MAXSIZEOFLINE, fpt) != NULL)
    {
        if (lineNum == 1)
        {
            fptrintf(stdout, "\f");
            lineNum = heading(name, pageNum++);
        }
        fptuts(line, stdout);
        if (++lineNum > MAXPAGE - MAXBOTTOM)
        {
            lineNum = 1;
        }
        fptrintf(stdout, "\f");
    }
}
int main(int argc, char *argv[])
{
    FILE *fpt;
    if (argc == 1)
    {
        filePrint(stdin, " ");
    }
    else
    {
        while (--argc > 0)
        {
            if ((fpt = fopen(*++argv, "r") == NULL))
            {
                fptrintf(stderr, "print: can't open %s\n", *argv);
                exit(1);
            }
            else
            {
                filePrint(fpt, *argv);
                fclose(fpt);
            }
        }
    }
    return 0;
}