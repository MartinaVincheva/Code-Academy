/* Задача 10. Намерете позицията си във файла.
long ftell(FILE *pfile);
Функцията приема указател към файла като параметър и връща long
int, който отговаря на позицията във файла.
Дефинирате променлива
long fpos = ftell(pfile)
Променливата съхранява текущата ви позицията в байтове от
началото на файла и вие можете да се върнете на нея по всяко
време.*/
#include <stdio.h>

int main()
{
    FILE *fpt = NULL;
    fpt = fopen("C:\\Users\\Marti\\codeAcademy\\gitRepo\\Code-Academy\\20210308_Tasks\\test8.txt", "wt");
    fputs("String new", fpt);
    fputs("\nString ", fpt);
    long fpos = ftell(fpt);
    printf("position : %ld it Bytes\n", fpos);
    fclose(fpt);
    return 0;
}