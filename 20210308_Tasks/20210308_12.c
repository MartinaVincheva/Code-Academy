/* Задача 12. Изместете позицията си във файла 7 байта след началото, ползвайки fseek.
int fseek(FILE *pfile, long offset, int original);
Първият параметър е указател към файла, вторият и третият параметър
оказват къде точно искаме да отидем във файла.
Референтни точки с предварително дефинирани имена:
SEEK_SET- началото на файла
SEEK_CUR- текуща позиция
fseek(fp, -10L, SEEK_CUR); връща на зад от текупата 10 bytes.
SEEK_END- края на файла
fseek(fp,0L, SEEK_END);
При текстови файлове, вторият аргумент трябва да е стойността върната от
ftell()
За текстови файлови третият аргумент трябва да е SEEK_SET, за бинарни
файлове и просто число в байтове.*/
#include <stdio.h>

int main()
{
    FILE *fpt = NULL;
    fpt = fopen("C:\\Users\\Marti\\codeAcademy\\gitRepo\\Code-Academy\\20210308_Tasks\\test12.txt", "w");
    if (NULL == fpt)
    {
        printf("Failed to open file.\n");
    }
    else
    {
        fprintf(fpt, "%s %s %s %d", "We", "are", "in", 2021);
    }
    fseek(fpt, 4, SEEK_END);
    fputs("Check", fpt);
    fseek(fpt, 0, SEEK_SET);
    fputs("Beginning", fpt);
    fclose(fpt);
    return 0;
}